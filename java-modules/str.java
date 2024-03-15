// Source code is decompiled from a .class file using FernFlower decompiler.
public class str {
    public str() {
    }

    public Object upper(Object var1) {
        return var1 instanceof String ? ((String) var1).toUpperCase() : null;
    }

    public Object lower(Object var1) {
        return var1 instanceof String ? ((String) var1).toLowerCase() : null;
    }

    public Object replace(Object var1, Object var2, Object var3) {
        return var1 instanceof String && var2 instanceof String && var3 instanceof String
                ? ((String) var1).replace((String) var2, (String) var3)
                : null;
    }

    public Object find(Object var1, Object var2) {
        return var1 instanceof String && var2 instanceof String ? ((String) var1).indexOf((String) var2) : null;
    }

    public Object reverse(Object var1) {
        return var1 instanceof String ? (new StringBuilder((String) var1)).reverse().toString() : null;
    }

    public Object _char(Object var1) {
        return var1 instanceof Long ? String.valueOf((char) ((Long) var1).intValue()) : null;
    }

    public Object _byte(Object var1) {
        return var1 instanceof String && ((String) var1).length() == 1 ? (long) ((String) var1).charAt(0) : null;
    }

    public Object rep(Object var1, Object var2) {
        if (var1 instanceof String && var2 instanceof Long) {
            int var3 = Math.toIntExact((Long) var2);
            StringBuilder var4 = new StringBuilder();

            for (int var5 = 0; var5 < var3; ++var5) {
                var4.append(var1);
            }

            return var4.toString();
        } else {
            return null;
        }
    }

    public Object combine(Object var1, Object var2) {
        return var1 instanceof String && var2 instanceof String ? ((String) var1).concat((String) var2) : null;
    }

    public Object index(Object var1, Object var2) {
        if (var1 instanceof String && var2 instanceof Long) {
            int var3 = Math.toIntExact((Long) var2);
            if (var3 >= 0 && var3 < ((String) var1).length()) {
                return String.valueOf(((String) var1).charAt(var3));
            }
        }

        return null;
    }

    public Object sub(Object var1, Object var2, Object var3) {
        if (var1 instanceof String && var2 instanceof Long && var3 instanceof Long) {
            int var4 = Math.toIntExact((Long) var2);
            int var5 = Math.toIntExact((Long) var3);
            int var6 = ((String) var1).length();
            if (var4 >= 0 && var5 <= var6 && var4 <= var5) {
                return ((String) var1).substring(var4, var5);
            }
        }

        return null;
    }

    public Object split(Object var1, Object var2) {
        return var1 instanceof String && var2 instanceof String ? ((String) var1).split((String) var2) : null;
    }

    public Object count(Object var1, Object var2) {
        if (var1 instanceof String && var2 instanceof String) {
            int var3 = 0;

            for (int var4 = 0; (var4 = ((String) var1).indexOf((String) var2, var4)) != -1; var4 += ((String) var2)
                    .length()) {
                ++var3;
            }

            return var3;
        } else {
            return null;
        }
    }
}
