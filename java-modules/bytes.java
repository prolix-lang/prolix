import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

public class bytes {
    public Object encode(Object obj) {
        try (ByteArrayOutputStream bos = new ByteArrayOutputStream(); 
            ObjectOutputStream oos = new ObjectOutputStream(bos)) {
            oos.writeObject(obj);
            return bos.toByteArray();
        } catch (IOException e) {
            return null;
        }
    }

    public Object decode(Object obj) {
        if (!(obj instanceof byte[])) {
            return null;
        }
        try (ByteArrayInputStream bis = new ByteArrayInputStream((byte[]) obj);
            ObjectInputStream ois = new ObjectInputStream(bis)) {
            return ois.readObject();
        } catch (IOException | ClassNotFoundException e) {
            return null;
        }
    }
}
