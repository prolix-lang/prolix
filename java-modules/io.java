import java.io.*;
import java.nio.file.Files;
import java.util.Scanner;

public class io {
	private static File cwf = null;

	public Object write(Object obj) {
		if (cwf == null) {
			String os = System.getProperty("os.name");
			try {
				if (os.contains("Windows")) {
					Runtime.getRuntime().exec("cls");
				} else {
					Runtime.getRuntime().exec("clear");
				}
			} catch (IOException e) {
				return null;
			}
			System.out.print(obj);
			return null;
		}
		try {
			FileWriter fileWriter = new FileWriter(cwf);
			if (obj instanceof byte[]) {
				fileWriter.write(new String((byte[]) obj));
			} else {
				fileWriter.write(obj.toString());
			}
			fileWriter.close();
		} catch (IOException e) {
			return false;
		}
		return true;
	}

	public Object buffwrite(Object obj) {
		if (cwf == null) {
			return null;
		}
		try {
			BufferedWriter writer = new BufferedWriter(new FileWriter(cwf));
			if (obj instanceof byte[]) {
				writer.write(new String((byte[]) obj));
			} else {
				writer.write(obj.toString());
			}
			writer.close();
		} catch (IOException e) {
			return false;
		}
		return true;
	}

	public Object buffappend(Object obj) {
		if (cwf == null) {
			return null;
		}
		try {
			BufferedWriter writer = new BufferedWriter(new FileWriter(cwf));
			if (obj instanceof byte[]) {
				writer.append(new String((byte[]) obj));
			} else {
				writer.append(obj.toString());
			}
			writer.close();
		} catch (IOException e) {
			return false;
		}
		return true;
	}

	public Object append(Object obj) {
		if (cwf == null) {
			System.out.print(obj);
			return null;
		}
		try {
			FileWriter fileWriter = new FileWriter(cwf);
			if (obj instanceof byte[]) {
				fileWriter.append(new String((byte[]) obj));
			} else {
				fileWriter.append(obj.toString());
			}
			fileWriter.close();
		} catch (IOException e) {
			return false;
		}
		return true;
	}

	public Object buffread() {
		if (cwf == null) {
			return null;
		}
		try {
			BufferedReader reader = new BufferedReader(new FileReader(cwf));
			String line = reader.readLine();
			String text = "";
			while (line != null) {
				text += line + "\n";
				line = reader.readLine();
			}
			reader.close();
			return text.substring(0, text.length());
		} catch (IOException e) {
			return false;
		}
	}

    @SuppressWarnings("resource")
    public Object read(Object _s) {
        if (cwf == null) {
            return (new Scanner(System.in)).nextLine();
        }
        int size = 0;
        if (_s instanceof Long) {
        	if ((Long) _s > 0l) {
        		size = ((Long) _s).intValue();
        	}
        } else if (_s instanceof Double) {
        	if ((Double) _s > 0d) {
        		size = ((Double) _s).intValue();
        	}
        } else {
			return null;
		}
        try {
            FileReader fileReader = new FileReader(cwf);
            char res[] = new char[size];
            fileReader.read(res);
            fileReader.close();
            String text = "";
            for (char _char : res) {
                text += String.valueOf(_char);
            }
            return text;
        } catch (IOException e) {
            return false;
        }
    }

	public Object writebytes(Object bytes) {
		if (!(bytes instanceof byte[])) {
			return false;
		}
		try {
			return Files.write(cwf.toPath(), (byte[]) bytes);
		} catch (IOException e) {
			return false;
		}
	}

	@SuppressWarnings("resource")
	public Object readbytes() {
		if (cwf == null) {
			return (new Scanner(System.in)).nextLine().getBytes();
		}
		try {
			return Files.readAllBytes(cwf.toPath());
		} catch (IOException e) {
			return false;
		}
	}

	public Object open(Object path) {
		if (cwf != null) {
			return false;
		}
		if (!(path instanceof String)) {
			return false;
		}
		File file = new File((String) path);
		if (!file.exists()) {
			try {
				file.createNewFile();
			} catch (IOException e) {
				return false;
			}
		}
		cwf = file;
		return true;
	}

	public Object close() {
		if (cwf == null) {
			return false;
		}
		cwf = null;
		return true;
	}
}
