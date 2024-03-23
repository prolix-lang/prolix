import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

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
        if (code == null) {
            System.exit(0);
        } else if (
            code.equals(0)
            || code.equals("")
            || code.equals(false)
        ) {
            System.exit(0);
        } else {
            System.exit(1);
        }
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
		File file = new File((String) filepath);
		return file.delete();
	}

	public Object rename(Object filepath, Object newname) {
		if (!(filepath instanceof String) || !(newname instanceof String)) {
			return null;
		}
		File file = new File((String) filepath);
		File newFile = new File((String) newname);
		return file.renameTo(newFile);
	}

	public Object chdir(Object dir) {
        if (!(dir instanceof String)) {
            return false;
        }
        Path path = Paths.get((String) dir);
        if (!Files.exists(path)) {
            return false;
        }
        System.setProperty("user.dir", path.toAbsolutePath().toString());
        return true;
    }
}
