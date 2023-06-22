
import java.util.*;

public class H_count_a_s {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int prefix[] = new int[s.length() + 1];

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'a')
                prefix[i + 1] = 1;
            prefix[i + 1] += prefix[i];

        }

        int q = sc.nextInt();
        while (q-- > 0) {
            int l, r;
            l = sc.nextInt();
            r = sc.nextInt();
            System.out.println(prefix[r] - prefix[l - 1]);
        }

    }
}