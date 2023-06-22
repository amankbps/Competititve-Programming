
import java.util.*;

public class D_Lakes_in_Berland {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int b = scanner.nextInt();
        int[] heights = new int[n];
        int[] costs = new int[n];

        for (int i = 0; i < n; i++) {
            heights[i] = scanner.nextInt();
            costs[i] = scanner.nextInt();
        }

        int minCost = calculateMinCost(heights, costs, b, 0, -1);
        System.out.println(minCost);
    }

    private static int calculateMinCost(int[] heights, int[] costs, int b, int index, int prevHeight) {
        if (index >= heights.length)
            return 0;

        int currentHeight = heights[index];
        int cost = Integer.MAX_VALUE;

        if (currentHeight != prevHeight) {
            cost = Math.min(cost, calculateMinCost(heights, costs, b, index + 1, currentHeight));
        }

        cost = Math.min(cost, calculateMinCost(heights, costs, b, index + 1, currentHeight + 1) + costs[index]);
        cost = Math.min(cost, calculateMinCost(heights, costs, b, index + 1, currentHeight - 1) + costs[index]);

        return cost;
    }
}
