//Merge overlapping Sub intervals
import java.util.Arrays;
class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
        int n = intervals.length;
        int[][] ans = new int[n + 1][2];
        int ansIndex = 0;
        for (int i = 0; i < n; i++) {
            if (ansIndex == 0 || intervals[i][0] > ans[ansIndex][1]) {
                ans[++ansIndex][0] = intervals[i][0];
                ans[ansIndex][1] = intervals[i][1];
            } else {
                ans[ansIndex][1] = Math.max(ans[ansIndex][1], intervals[i][1]);
            }
        }
        return Arrays.copyOfRange(ans, 1, ansIndex + 1);
    }
}
