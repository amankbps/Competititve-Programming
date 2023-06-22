
import java.util.*;

public class K_Sorting_pairs {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        pair arr[] = new pair[n];
        for (int i = 0; i < n; i++) {
            String s = sc.next();
            int x = sc.nextInt();

            arr[i] = new pair(s, x);
        }

        Arrays.sort(arr, new cmp());
        for (int i = 0; i < n; i++)
            System.out.println(arr[i].s + " " + arr[i].x);
    }

    static class cmp implements Comparator<pair> {
        public int compare(pair p1, pair p2) {
            if (p1.x != p2.x) {
                if (p1.x < p2.x)
                    return 1;
                else
                    return -1;
            } else {
                return p1.s.compareTo(p2.s);
            }
        }
    }
}

class pair {
    String s;
    int x;

    pair(String a, int b) {
        s = a;
        x = b;
    }
}