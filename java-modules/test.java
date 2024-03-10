import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

import javax.swing.ImageIcon;
import javax.swing.JFrame;

public class test {
    public static class frame extends JFrame {
        JFrame main;

        public frame(JFrame main) {
            this.main = main;
        }
    }
    public static void main(String[] args) {
        JFrame jFrame = new JFrame();
        jFrame.setIconImage(new ImageIcon("icon.png").getImage());
        System.out.println(jFrame.hashCode());
        byte[] bytes = compile_obj(new frame(jFrame));
        Object obj = decompile_obj(bytes);
        frame f = (frame) obj;
        f.main.setVisible(true);
    }

    private static Object decompile_obj(Object obj) {
        if (obj instanceof byte[]) {
            ByteArrayInputStream bis = new ByteArrayInputStream((byte[]) obj);
            try {
                ObjectInputStream ois = new ObjectInputStream(bis);
                obj = ois.readObject();
            } catch (Exception e) {
                return null;
            }
        }
        return obj;
    }

    private static byte[] compile_obj(Object obj) {
        ByteArrayOutputStream bos = new ByteArrayOutputStream();
        try {
            ObjectOutputStream oos = new ObjectOutputStream(bos);
            oos.writeObject(obj);
        } catch (IOException e) {
            e.printStackTrace();
            return null;
        }

        return bos.toByteArray();
    }
}