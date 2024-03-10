import java.io.*;

public class io {
    public Object write(Object filepath, Object val) {
        try (FileOutputStream outputStream = new FileOutputStream((String) filepath)) {
            outputStream.write(val.toString().getBytes());
            return true;
        } catch (IOException e) {
            return false;
        }
    }

    public Object read(Object filepath) {
        try (FileInputStream inputStream = new FileInputStream((String) filepath)) {
            return new String(inputStream.readAllBytes());
        } catch (IOException e) {
            return null;
        }
    }
}
