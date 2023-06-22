
import java.util.*;

public class D_The_first_missing_number {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        boolean pos[] = new boolean[m + 1];
        boolean neg[] = new boolean[m + 1];
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            if (x >= 0)
                pos[x] = true;
            else
                neg[Math.abs(x)] = true;
        }
        boolean ok = false;
        for (int i = m; i >= 1; i--) {
            if (neg[i] == false) {
                System.out.print(-i);
                ok = true;
                break;
            }

        }
        if (ok == false)
            for (int i = 0; i <= m; i++) {
                if (pos[i] == false) {
                    System.out.print(i);
                    break;
                }

            }
    }
}