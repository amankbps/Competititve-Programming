
import java.util.*;

public class E_Range_sum_query {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, q;
        n = sc.nextInt();
        q = sc.nextInt();
        long arr[] = new long[n + 1];
        for (int i = 1; i <= n; i++) {
            arr[i] = sc.nextLong();
            arr[i] += arr[i - 1];
        }

        while (q-- > 0) {
            int a, b;
            a = sc.nextInt();
            b = sc.nextInt();
            System.out.println(arr[b] - arr[a - 1]);
        }
    }
}