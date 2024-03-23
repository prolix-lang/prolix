import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

@SuppressWarnings({ "unchecked", "rawtypes" })
public class table {
	public table() {
	}

	public Object add(Object obj1, Object obj2) {
		if (obj1 instanceof HashMap obj3 && obj2 != null) {
			obj3.put(obj3.size(), obj2);
		}

		return obj1;
	}

	public Object set(Object obj1, Object obj2, Object obj3) {
		if (obj1 instanceof HashMap obj4) {
			if (obj3 == null) {
				obj4.remove(obj2);
			} else {
				obj4.put(obj2, obj3);
			}
		}

		return obj1;
	}

	public Object size(Object obj1) {
		if (obj1 instanceof HashMap obj2) {
			return obj2.size();
		} else {
			return null;
		}
	}

	public Object replace(Object obj1, Object obj2, Object obj3) {
		if (obj1 instanceof HashMap obj4) {
			if (obj4.containsKey(obj2) && obj4.containsKey(obj3)) {
				Object obj5 = obj4.get(obj2);
				obj4.put(obj2, obj4.get(obj3));
				obj4.put(obj3, obj5);
			}
		}

		return obj1;
	}

	public Object move(Object obj1, Object obj2, Object obj3) {
		if (obj1 instanceof HashMap obj4) {
			if (obj4.containsKey(obj2)) {
				Object obj5 = obj4.remove(obj2);
				obj4.put(obj3, obj5);
			}
		}

		return obj1;
	}

	public Object remove(Object obj1, Object obj2) {
		if (obj1 instanceof HashMap obj3) {
			return obj3.remove(obj2);
		} else {
			return null;
		}
	}

	public Object get(Object obj1, Object obj2) {
		if (obj1 instanceof HashMap obj3) {
			return obj3.get(obj2);
		} else {
			return null;
		}
	}

	public Object take(Object obj1, Object obj2) {
		if (obj1 instanceof HashMap obj3) {
			return obj3.remove(obj2);
		} else {
			return null;
		}
	}

	public Object find(Object obj1, Object obj2) {
		if (obj1 instanceof HashMap obj3) {
			Iterator obj4 = obj3.entrySet().iterator();

			while (obj4.hasNext()) {
				Map.Entry obj5 = (Map.Entry) obj4.next();
				if (obj5.getValue().equals(obj2)) {
					return obj5.getKey();
				}
			}
		}

		return null;
	}

	public Object clear(Object obj1) {
		if (obj1 instanceof HashMap obj2) {
			obj2.clear();
		}

		return obj1;
	}

	public Object create() {
		return new HashMap<Object, Object>();
	}

	private Boolean eq(Object obj1, Object obj2) {
		if (obj1 == null) {
			if (obj2 == null) {
				return true;
			}
			return obj2.equals(obj1);
		}
		return obj1.equals(obj2);
	}

	public Object compare(Object obj1, Object obj2) {
		if (!(obj1 instanceof HashMap)) {
			return null;
		} else if (!(obj2 instanceof HashMap)) {
			return null;
		}
		HashMap<Object, Object> table1 = (HashMap<Object, Object>) obj1;
		HashMap<Object, Object> table2 = (HashMap<Object, Object>) obj2;
		for (Object key : table1.keySet()) {
			if (!eq(table1.get(key), table2.get(key))) {
				return false;
			}
		}
		for (Object key : table2.keySet()) {
			if (!eq(table1.get(key), table2.get(key))) {
				return false;
			}
		}
		return true;
	}

	public Object clone(Object obj1) {
		if (obj1 instanceof HashMap obj2) {
			return obj2.clone();
		}

		return null;
	}

	public Object entries(Object obj1) {
		if (obj1 instanceof HashMap) {
			HashMap<Object, Object> table = (HashMap<Object, Object>) obj1;
			HashMap<Object, Object> res = new HashMap<>();

			for (HashMap.Entry<Object, Object> entry : table.entrySet()) {
				HashMap<Object, Object> resEntry = new HashMap<>();
				resEntry.put(resEntry.size(), entry.getKey());
				resEntry.put(resEntry.size(), entry.getValue());
				res.put(res.size(), resEntry);
			}

			return res;
		}

		return null;
	}
}