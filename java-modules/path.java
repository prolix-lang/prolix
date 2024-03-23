import java.io.File;
import java.nio.file.Path;
import java.nio.file.Paths;

public class path {
    public Object getfilename(Object path) {
        if (!(path instanceof String)) {
            return null;
        }

        return Paths.get((String) path).getFileName().toString();
    }

    public Object getfilesys(Object path) {
        if (!(path instanceof String)) {
            return null;
        }

        return Paths.get((String) path).getFileSystem().toString();
    }

    public Object getparent(Object path) {
        if (!(path instanceof String)) {
            return null;
        }

        Path res = Paths.get((String) path).getRoot();

        if (res == null) {
            return null;
        }

        return res.toString();
    }

    public Object isabs(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        
        return Paths.get((String) path).isAbsolute();
    }

    public Object normalize(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        
        return Paths.get((String) path).normalize().toString();
    }

    public Object relativize(Object path, Object otherpath) {
        if (!(path instanceof String) || !(otherpath instanceof String)) {
            return null;
        }
        
        return Paths.get((String) path).relativize(Paths.get((String) otherpath));
    }

    public Object resolve(Object path, Object otherpath) {
        if (!(path instanceof String) || !(otherpath instanceof String)) {
            return null;
        }
        
        return Paths.get((String) path).resolve(Paths.get((String) otherpath));
    }

    public Object resolvesib(Object path, Object otherpath) {
        if (!(path instanceof String) || !(otherpath instanceof String)) {
            return null;
        }
        
        return Paths.get((String) path).resolveSibling(Paths.get((String) otherpath));
    }

    public Object startswith(Object path, Object otherpath) {
        if (!(path instanceof String) || !(otherpath instanceof String)) {
            return null;
        }
        
        return Paths.get((String) path).startsWith(Paths.get((String) otherpath));
    }

    public Object toabs(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        
        return Paths.get((String) path).toAbsolutePath();
    }

    public Object exists(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        
        return new File((String) path).exists();
    }

    public Object isfile(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        
        return new File((String) path).isFile();
    }

    public Object isdir(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        
        return new File((String) path).isDirectory();
    }
}