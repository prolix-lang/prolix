// Source code is decompiled from a .class file using FernFlower decompiler.
public class str {
    public str() {
    }

    public Object upper(Object obj1) {
        return obj1 instanceof String ? ((String) obj1).toUpperCase() : null;
    }

    public Object lower(Object obj1) {
        return obj1 instanceof String ? ((String) obj1).toLowerCase() : null;
    }

    public Object replace(Object obj1, Object obj2, Object obj3) {
        return obj1 instanceof String && obj2 instanceof String && obj3 instanceof String
                ? ((String) obj1).replace((String) obj2, (String) obj3)
                : null;
    }

    public Object find(Object obj1, Object obj2) {
        return obj1 instanceof String && obj2 instanceof String ? ((String) obj1).indexOf((String) obj2) : null;
    }

    public Object reverse(Object obj1) {
        return obj1 instanceof String ? (new StringBuilder((String) obj1)).reverse().toString() : null;
    }

    public Object _char(Object obj1) {
        return obj1 instanceof Long ? String.valueOf((char) ((Long) obj1).intValue()) : null;
    }

    public Object _byte(Object obj1) {
        return obj1 instanceof String && ((String) obj1).length() == 1 ? (long) ((String) obj1).charAt(0) : null;
    }

    public Object rep(Object obj1, Object obj2) {
        if (obj1 instanceof String && obj2 instanceof Long) {
            int obj3 = Math.toIntExact((Long) obj2);
            StringBuilder obj4 = new StringBuilder();

            for (int obj5 = 0; obj5 < obj3; ++obj5) {
                obj4.append(obj1);
            }

            return obj4.toString();
        } else {
            return null;
        }
    }

    public Object combine(Object obj1, Object obj2) {
        return obj1 instanceof String && obj2 instanceof String ? ((String) obj1).concat((String) obj2) : null;
    }

    public Object index(Object obj1, Object obj2) {
        if (obj1 instanceof String && obj2 instanceof Long) {
            int obj3 = Math.toIntExact((Long) obj2);
            if (obj3 >= 0 && obj3 < ((String) obj1).length()) {
                return String.valueOf(((String) obj1).charAt(obj3));
            }
        }

        return null;
    }

    public Object sub(Object obj1, Object obj2, Object obj3) {
        if (obj1 instanceof String && obj2 instanceof Long && obj3 instanceof Long) {
            int obj4 = Math.toIntExact((Long) obj2);
            int obj5 = Math.toIntExact((Long) obj3);
            int obj6 = ((String) obj1).length();
            if (obj4 >= 0 && obj5 <= obj6 && obj4 <= obj5) {
                return ((String) obj1).substring(obj4, obj5);
            }
        }

        return null;
    }

    public Object split(Object obj1, Object obj2) {
        return obj1 instanceof String && obj2 instanceof String ? ((String) obj1).split((String) obj2) : null;
    }

    public Object count(Object obj1, Object obj2) {
        if (obj1 instanceof String && obj2 instanceof String) {
            int obj3 = 0;

            for (int obj4 = 0; (obj4 = ((String) obj1).indexOf((String) obj2, obj4)) != -1; obj4 += ((String) obj2)
                    .length()) {
                ++obj3;
            }

            return obj3;
        } else {
            return null;
        }
    }
}
