import java.util.*;

public class E_Queue {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Deque<Integer> dq = new ArrayDeque<>();
        int n = sc.nextInt();
        while (n-- > 0) {
            String s = sc.next();
            int x;
            if (s.equals("push")) {
                x = sc.nextInt();
                dq.addLast(x);
            } else if (s.equals("front")) {
                System.out.println(dq.peekFirst());
            } else if (s.equals("back")) {
                System.out.println(dq.peekLast());
            } else
                dq.pollFirst();
        }
    }
}