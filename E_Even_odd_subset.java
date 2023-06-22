
import java.util.*;

public class E_Even_odd_subset {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        int ans = 0;
        for (int i = 0; i < (1 << n); i++) {
            int even = 0, odd = 0;
            for (int j = 0; j < n; j++) {
                if ((i & (1 << j)) > 0) {
                    if (arr[j] % 2 == 0)
                        even++;
                    else
                        odd++;
                }
            }
            if (even > odd)
                ans++;
        }
        System.out.println(ans);

    }
}