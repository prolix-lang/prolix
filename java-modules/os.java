public class os {

	public os() {
	}

	public Object name() {
		return System.getProperty("os.name");
	}

	public Object maxmem() {
		return Runtime.getRuntime().maxMemory();
	}

	public Object totalmem() {
		return Runtime.getRuntime().totalMemory();
	}

	public Object freemem() {
		return Runtime.getRuntime().freeMemory();
	}

	public Object version() {
		return System.getProperty("os.version");
	}

	public Object date(Object format) {
		if (!(format instanceof String)) {
			return null;
		}
		java.text.SimpleDateFormat sdf = new java.text.SimpleDateFormat((String) format);
		return sdf.format(new java.util.Date());
	}

	public Object exec(Object cmd) {
		if (!(cmd instanceof String)) {
            return null;
        }
        try {
			String command[] = {};
			if (System.getProperty("os.name").startsWith("Windows")) {
				command = new String[]{"cmd", "/c", (String) cmd};
			} else if (System.getProperty("os.name").startsWith("Linux")) {
				command = new String[]{"bash", "-c", (String) cmd};
			}
            Process process = Runtime.getRuntime().exec(command);
            java.io.BufferedReader reader = new java.io.BufferedReader(new java.io.InputStreamReader(process.getInputStream()));
            String line;
            StringBuilder output = new StringBuilder();
            while ((line = reader.readLine()) != null) {
                output.append(line).append("\n");
            }
            process.waitFor();
            return output.toString();
        } catch (Exception e) {
			e.printStackTrace();
            return null;
        }
	}

	public Object exit(Object code) {
		long statusCode = 0;
		if (code != null) {
			if (code instanceof Long) {
				statusCode = (Long) code;
			} else {
				return null;
			}
		}
		System.exit((int) statusCode);
		return null;
	}

	public Object getenv(Object varname) {
		if (!(varname instanceof String)) {
			return null;
		}
		return System.getenv((String) varname);
	}

	public Object remove(Object filepath) {
		if (!(filepath instanceof String)) {
			return null;
		}
		java.io.File file = new java.io.File((String) filepath);
		return file.delete();
	}

	public Object rename(Object filepath, Object newname) {
		if (!(filepath instanceof String) || !(newname instanceof String)) {
			return null;
		}
		java.io.File file = new java.io.File((String) filepath);
		java.io.File newFile = new java.io.File((String) newname);
		return file.renameTo(newFile);
	}
}
