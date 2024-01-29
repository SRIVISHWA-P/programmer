
//merging 2 sorted arrays
import java.util.*;

class Solution {
    public static List<Integer> sortedArray(int[] a, int[] b) {
        int n1 = a.length;
        int n2 = b.length;
        int i = 0, j = 0;
        List<Integer> ans = new ArrayList<>();
        while (i < n1 && j < n2) {
            if (a[i] <= b[j]) {
                if (ans.size() == 0 || a[i] != ans.get(ans.size() - 1))
                    ans.add(a[i]);
                i++;
            } else {
                if (ans.size() == 0 || b[j] != ans.get(ans.size() - 1))
                    ans.add(b[j]);
                j++;
            }
        }

        while (i < n1) {
            if (a[i] != ans.get(ans.size() - 1))
                ans.add(a[i]);
            i++;
        }

        while (j < n2) {
            if (b[j] != ans.get(ans.size() - 1))
                ans.add(b[j]);
            j++;
        }
        return ans;
    }
}