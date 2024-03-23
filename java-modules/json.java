import java.util.HashMap;
import java.util.Map;

public class json {

    @SuppressWarnings("unchecked")
    private Boolean isarray(Object table) {
        if (!(table instanceof HashMap)) {
            return false;
        }
        Boolean isarr = false;
        HashMap<Object, Object> hashMap = (HashMap<Object, Object>) table;
        for (long idx = 0;idx < hashMap.size();idx++) {
            isarr = hashMap.containsKey(idx) ? true : isarr;
            if (!hashMap.containsKey(idx)) {
                return false;
            }
        }

        return true;
    }

    public Object encode(Object object) {
        if (object == null) {
            return "null";
        } else if (object instanceof String) {
            return "\"" + escapeString((String) object) + "\"";
        } else if (object instanceof Number) {
            return object.toString();
        } else if (object instanceof Boolean) {
            return object.toString();
        } else if (object instanceof HashMap) {
            HashMap<?, ?> map = (HashMap<?, ?>) object;
            System.out.println(isarray(map));
            if (isarray(map)) {
                StringBuilder encoded = new StringBuilder("[");
                for (Long i = 0l; i < map.size(); i++) {
                    if (i > 0) {
                        encoded.append(",");
                    }
                    encoded.append(encode(map.get(i)));
                }
                encoded.append("]");
                return encoded.toString();
            } else {
                StringBuilder encoded = new StringBuilder("{");
                boolean first = true;
                for (Map.Entry<?, ?> entry : map.entrySet()) {
                    if (!(entry.getKey() instanceof String)) {
                        return null;
                    }
                    if (!first) {
                        encoded.append(",");
                    }
                    encoded.append(encode(entry.getKey())).append(":").append(encode(entry.getValue()));
                    first = false;
                }
                encoded.append("}");
                return encoded.toString();
            }
        } else {
            return null;
        }
    }

    public Object decode(String jsonString) {
        // Remove whitespace from the JSON string
        jsonString = jsonString.trim();

        // Handle JSON object
        if (jsonString.startsWith("{") && jsonString.endsWith("}")) {
            jsonString = jsonString.substring(1, jsonString.length() - 1);
            String[] keyValuePairs = jsonString.split(",");
            HashMap<Object, Object> jsonObject = new HashMap<>();
            for (String pair : keyValuePairs) {
                String[] keyValue = pair.split(":", 2);
                Object key = decodeValue(keyValue[0].trim());
                Object value = decodeValue(keyValue[1].trim());
                jsonObject.put(key, value);
            }
            return jsonObject;
        }

        // Handle JSON array
        else if (jsonString.startsWith("[") && jsonString.endsWith("]")) {
            jsonString = jsonString.substring(1, jsonString.length() - 1);
            String[] elements = jsonString.split(",");
            HashMap<Object, Object> jsonArray = new HashMap<>();
            for (int i = 0; i < elements.length; i++) {
                jsonArray.put(i, decodeValue(elements[i].trim()));
            }
            return jsonArray;
        }

        // Handle JSON string
        else if (jsonString.startsWith("\"") && jsonString.endsWith("\"")) {
            return jsonString.substring(1, jsonString.length() - 1);
        }

        // Handle JSON number
        else if (jsonString.matches("-?\\d+(\\.\\d+)?")) {
            if (jsonString.contains(".")) {
                return Double.parseDouble(jsonString);
            } else {
                return Long.parseLong(jsonString);
            }
        }

        // Handle JSON null
        else if (jsonString.equals("null")) {
            return null;
        }

        // Unsupported JSON format
        throw new IllegalArgumentException("Invalid JSON format: " + jsonString);
    }

    private Object decodeValue(String value) {
        if (value.startsWith("\"") && value.endsWith("\"")) {
            return value.substring(1, value.length() - 1);
        } else if (value.matches("-?\\d+(\\.\\d+)?")) {
            if (value.contains(".")) {
                return Double.parseDouble(value);
            } else {
                return Long.parseLong(value);
            }
        } else if (value.equals("null")) {
            return null;
        } else if (value.equals("true")) {
            return true;
        } else if (value.equals("false")) {
            return false;
        } else {
            throw new IllegalArgumentException("Invalid JSON value: " + value);
        }
    }

    private String escapeString(String str) {
        StringBuilder builder = new StringBuilder();
        for (char c : str.toCharArray()) {
            switch (c) {
                case '\"':
                    builder.append("\\\"");
                    break;
                case '\\':
                    builder.append("\\\\");
                    break;
                case '\b':
                    builder.append("\\b");
                    break;
                case '\f':
                    builder.append("\\f");
                    break;
                case '\n':
                    builder.append("\\n");
                    break;
                case '\r':
                    builder.append("\\r");
                    break;
                case '\t':
                    builder.append("\\t");
                    break;
                default:
                    if (Character.isISOControl(c)) {
                        builder.append("\\u").append(String.format("%04x", (int) c));
                    } else {
                        builder.append(c);
                    }
            }
        }
        return builder.toString();
    }
}
