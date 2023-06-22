
import java.util.*;

public class B_Count_characters {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        TreeMap<Character, Integer> m = new TreeMap<>();
        char arr[] = s.toCharArray();
        for (char c : arr) {
            if (m.containsKey(c))
                m.put(c, m.get(c) + 1);
            else
                m.put(c, 1);
        }

        for (Map.Entry<Character, Integer> c : m.entrySet())
            System.out.println(c.getKey() + " " + c.getValue());
    }
}