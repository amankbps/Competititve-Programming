import java.util.*;
import java.util.function.Predicate;

public class M_distinct_elements {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int q = sc.nextInt();
        TreeSet<Integer> s = new TreeSet<>();
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            s.add(x);
        }
        ArrayList<Integer> arr = new ArrayList<>(s);

        while (q-- > 0) {
            int x = sc.nextInt();
            System.out.print(lowerbound(arr, x) + 1 + " ");
            System.out.println(arr.size() - upperbound(arr, x) - 1);
        }

    }

    public static int lowerbound(ArrayList<Integer> arr, int x) {
        int low = 0, high = arr.size() - 1;
        int ans = -1;
        Predicate<Integer> check1 = mid -> arr.get(mid) < x;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (check1.test(mid)) {
                ans = mid;
                low = mid + 1;
            } else
                high = mid - 1;
        }
        return ans;
    }

    public static int upperbound(ArrayList<Integer> arr, int x) {
        int low = 0, high = arr.size() - 1;
        int ans = 0;
        Predicate<Integer> check1 = mid -> arr.get(mid) <= x;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (check1.test(mid)) {
                ans = mid;
                low = mid + 1;
            } else
                high = mid - 1;
        }
        return ans;
    }
}