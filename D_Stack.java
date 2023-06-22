import java.util.*;

public class D_Stack {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Stack<Integer> s = new Stack<>();
        int n = sc.nextInt();
        while (n-- > 0) {
            String str = sc.next();
            if (str.equals("push")) {
                int x = sc.nextInt();
                s.push(x);
            } else if (str.equals("top")) {
                System.out.println(s.peek());
            } else
                s.pop();

        }
    }
}