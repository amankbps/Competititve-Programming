import java.util.*;

public class A_Bits_Operation {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt();
        int n = sc.nextInt();
        while (q-- > 0) {
            int t = sc.nextInt();

            if (t == 1) {
                int x = sc.nextInt();
                n = n | x;
            } else if (t == 2) {
                int x = sc.nextInt();
                n &= x;
            } else if (t == 3) {
                int x = sc.nextInt();
                n ^= x;
            } else
                n = ~n;
            System.out.println(n);
        }
    }
}