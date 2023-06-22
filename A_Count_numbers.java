
import java.util.*;

public class A_Count_numbers {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int q = sc.nextInt();
        HashMap<Integer, Integer> m = new HashMap<>();

        while (q-- > 0) {
            int type, x;
            type = sc.nextInt();
            x = sc.nextInt();
            if (type == 1) {
                if (m.containsKey(x))
                    m.put(x, m.get(x) + 1);
                else
                    m.put(x, 1);
            } else {
                if (m.containsKey(x))
                    System.out.println(m.get(x));
                else
                    System.out.println(0);
            }

        }
    }
}