import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class regex {

    public Object search(Object pattern, Object str) {
        if (!(pattern instanceof String)) {
            return null;
        } else if (!(str instanceof String)) {
            return null;
        }

        ArrayList<Object> result = new ArrayList<>();
        ArrayList<Object> stringIndices = new ArrayList<>();
        ArrayList<Object> groups = new ArrayList<>();

        Pattern p = Pattern.compile((String) pattern);
        Matcher m = p.matcher((String) str);

        while (m.find()) {
            ArrayList<Object> indexes = new ArrayList<>();
            indexes.add(m.start());
            indexes.add(m.end());
            stringIndices.add(indexes);

            for (int i = 0; i <= m.groupCount(); i++) {
                groups.add(m.group(i));
            }
        }

        result.add(stringIndices);
        result.add(groups);

        return result;
    }

    public Object match(Object pattern, Object str) {
        if (!(pattern instanceof String)) {
            return null;
        } else if (!(str instanceof String)) {
            return null;
        }

        ArrayList<Object> result = new ArrayList<>();
        ArrayList<Object> stringIndices = new ArrayList<>();
        ArrayList<Object> groups = new ArrayList<>();

        Pattern p = Pattern.compile("^" + pattern.toString());
        Matcher m = p.matcher((String) str);

        if (m.find() && m.start() == 0) {
            stringIndices.add(m.start());
            stringIndices.add(m.end());

            for (int i = 0; i <= m.groupCount(); i++) {
                groups.add(m.group(i));
            }
        }

        result.add(stringIndices);
        result.add(groups);

        return result;
    }

    public Object fullmatch(Object pattern, Object str) {
        if (!(pattern instanceof String)) {
            return null;
        } else if (!(str instanceof String)) {
            return null;
        }

        ArrayList<Object> result = new ArrayList<>();
        ArrayList<Object> stringIndices = new ArrayList<>();
        ArrayList<Object> groups = new ArrayList<>();

        Pattern p = Pattern.compile("^" + pattern.toString() + "$");
        Matcher m = p.matcher((String) str);

        if (m.find() && m.start() == 0 && m.end() == ((String) str).length()) {
            stringIndices.add(m.start());
            stringIndices.add(m.end());

            for (int i = 0; i <= m.groupCount(); i++) {
                groups.add(m.group(i));
            }
        }

        result.add(stringIndices);
        result.add(groups);

        return result;
    }

    public Object split(Object pattern, Object str) {
        if (!(pattern instanceof String)) {
            return null;
        } else if (!(str instanceof String)) {
            return null;
        }

        ArrayList<Object> result = new ArrayList<>();
        Pattern p = Pattern.compile((String) pattern);
        String[] parts = p.split((String) str);
        for (String part : parts) {
            result.add(part);
        }
        return result;
    }

    public Object findall(Object pattern, Object str) {
        if (!(pattern instanceof String)) {
            return null;
        } else if (!(str instanceof String)) {
            return null;
        }

        ArrayList<Object> result = new ArrayList<>();
        ArrayList<Object> groups = new ArrayList<>();

        Pattern p = Pattern.compile((String) pattern);
        Matcher m = p.matcher((String) str);

        while (m.find()) {
            for (int i = 0; i <= m.groupCount(); i++) {
                groups.add(m.group(i));
            }
        }

        result.addAll(groups);
        return result;
    }
}
