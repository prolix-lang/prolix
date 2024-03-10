import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

@SuppressWarnings({"unchecked", "rawtypes"})
public class table {
   public table() {
   }

   public Object add(Object var1, Object var2) {
      if (var1 instanceof HashMap var3 && var2 != null) {
         var3.put(var3.size(), var2);
      }

      return var1;
   }

   public Object set(Object var1, Object var2, Object var3) {
      if (var1 instanceof HashMap var4) {
         if (var3 == null) {
            var4.remove(var2);
         } else {
            var4.put(var2, var3);
         }
      }

      return var1;
   }

   public Object size(Object var1) {
      if (var1 instanceof HashMap var2) {
         return var2.size();
      } else {
         return null;
      }
   }

   public Object replace(Object var1, Object var2, Object var3) {
      if (var1 instanceof HashMap var4) {
         if (var4.containsKey(var2) && var4.containsKey(var3)) {
            Object var5 = var4.get(var2);
            var4.put(var2, var4.get(var3));
            var4.put(var3, var5);
         }
      }

      return var1;
   }

   public Object move(Object var1, Object var2, Object var3) {
      if (var1 instanceof HashMap var4) {
         if (var4.containsKey(var2)) {
            Object var5 = var4.remove(var2);
            var4.put(var3, var5);
         }
      }

      return var1;
   }

   public Object remove(Object var1, Object var2) {
      if (var1 instanceof HashMap var3) {
         return var3.remove(var2);
      } else {
         return null;
      }
   }

   public Object get(Object var1, Object var2) {
      if (var1 instanceof HashMap var3) {
         return var3.get(var2);
      } else {
         return null;
      }
   }

   public Object take(Object var1, Object var2) {
      if (var1 instanceof HashMap var3) {
         return var3.remove(var2);
      } else {
         return null;
      }
   }

   public Object find(Object var1, Object var2) {
      if (var1 instanceof HashMap var3) {
        Iterator var4 = var3.entrySet().iterator();

         while(var4.hasNext()) {
            Map.Entry var5 = (Map.Entry)var4.next();
            if (var5.getValue().equals(var2)) {
               return var5.getKey();
            }
         }
      }

      return null;
   }

   public Object clear(Object var1) {
      if (var1 instanceof HashMap var2) {
         var2.clear();
      }

      return var1;
   }

   public Object create() {
      return new HashMap();
   }

   public Object lock(Object var1) {
      return var1;
   }

   public Object unlock(Object var1) {
      return var1;
   }
}