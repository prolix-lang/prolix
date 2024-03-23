import java.io.IOException;
import java.nio.file.CopyOption;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.StandardCopyOption;
import java.nio.file.attribute.FileTime;
import java.util.HashMap;
import java.util.stream.Stream;

public class file {
    public Object copy(Object path, Object target, Object mode) {
        if (!(path instanceof String) || !(target instanceof String)) {
            return null;
        }
        CopyOption copy[] = new CopyOption[3];
        if (mode instanceof String) {
            boolean a = false;
            boolean c = false;
            boolean r = false;
            for (char _char : ((String) mode).toCharArray()) {
                if (_char == 'a' && !a) {
                    copy[0] = StandardCopyOption.ATOMIC_MOVE;
                    a = true;
                } else if (_char == 'c' && !c) {
                    copy[1] = StandardCopyOption.COPY_ATTRIBUTES;
                    c = true;
                } else if (_char == 'r' && !r) {
                    copy[1] = StandardCopyOption.REPLACE_EXISTING;
                    r = true;
                } else {
                    return null;
                }
            }
        }
        try {
            Files.copy(Paths.get((String) path), Paths.get((String) target), copy);
        } catch (IOException e) {
            return false;
        }
        return true;
    }

    public Object createdir(Object path) {
        if (!(path instanceof String))
        try {
            Files.createDirectory(Paths.get((String) path));
        } catch (IOException e) {
            return false;
        }
        return true;
    }

    public Object createfile(Object path) {
        if (!(path instanceof String))
        try {
            Files.createFile(Paths.get((String) path));
        } catch (IOException e) {
            return false;
        }
        return true;
    }

    public Object delete(Object path) {
        if (!(path instanceof String))
        try {
            Files.delete(Paths.get((String) path));
        } catch (IOException e) {
            return false;
        }
        return true;
    }

    public Object exists(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        return Files.exists(Paths.get((String) path));
    }

    public Object getlastmodtime(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        try {
            return Files.getLastModifiedTime(Paths.get((String) path)).toMillis();
        } catch (IOException e) {
            return null;
        }
    }

    public Object getowner(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        try {
            return Files.getOwner(Paths.get((String) path)).getName();
        } catch (IOException e) {
            return null;
        }
    }

    public Object isdir(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        return Files.isDirectory(Paths.get((String) path));
    }

    public Object isexe(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        return Files.isExecutable(Paths.get((String) path));
    }

    public Object ishidden(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        try {
            return Files.isHidden(Paths.get((String) path));
        } catch (IOException e) {
            return null;
        }
    }

    public Object isreadable(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        return Files.isReadable(Paths.get((String) path));
    }

    public Object isregular(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        return Files.isRegularFile(Paths.get((String) path));
    }

    public Object iswritable(Object path) {
        if (!(path instanceof String)) {
            return null;
        }
        return Files.isWritable(Paths.get((String) path));
    }

    public Object list(Object path) {
        if (!(path instanceof String)) {
            return null;
        } else if (!Files.isDirectory(Paths.get((String) path))) {
            return null;
        }
        HashMap<Object, Object> res = new HashMap<>();
        try {
            Stream<Path> list = Files.list(Paths.get((String) path));
            Path _path = Paths.get((String) path);
            for (Object o : list.toArray()) {
                Path p = (Path) o;
                res.put(res.size(), p.relativize(_path));
            }
            list.close();
        } catch (IOException e) {
            return null;
        }
        return res;
    }

    public Object move(Object path, Object target, Object mode) {
        if (!(path instanceof String) || !(target instanceof String)) {
            return null;
        }
        CopyOption copy[] = new CopyOption[3];
        if (mode instanceof String) {
            boolean a = false;
            boolean c = false;
            boolean r = false;
            for (char _char : ((String) mode).toCharArray()) {
                if (_char == 'a' && !a) {
                    copy[0] = StandardCopyOption.ATOMIC_MOVE;
                    a = true;
                } else if (_char == 'c' && !c) {
                    copy[1] = StandardCopyOption.COPY_ATTRIBUTES;
                    c = true;
                } else if (_char == 'r' && !r) {
                    copy[1] = StandardCopyOption.REPLACE_EXISTING;
                    r = true;
                } else {
                    return null;
                }
            }
        }
        try {
            Files.move(Paths.get((String) path), Paths.get((String) target), copy);
        } catch (IOException e) {
            return false;
        }
        return true;
    }

    public Object setlastmodtime(Object path, Object milisec) {
        if (!(path instanceof String) || !(milisec instanceof Long)) {
            return null;
        }
        try {
            Files.setLastModifiedTime(Paths.get((String) path), FileTime.fromMillis((Long) milisec));
        } catch (IOException e) {
            return false;
        }
        return true;
    }
}
