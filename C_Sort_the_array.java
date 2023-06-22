
import java.util.*;

public class C_Sort_the_array {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        TreeMap<Integer, Integer> freq = new TreeMap<>();
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            if (freq.containsKey(x))
                freq.put(x, freq.get(x) + 1);
            else
                freq.put(x, 1);
        }

        for (Map.Entry<Integer, Integer> x : freq.entrySet()) {
            for (int i = 0; i < x.getValue(); i++)
                System.out.print(x.getKey() + " ");
        }

    }
}