import java.util.* ;
import java.io.*; 
public class Solution {
    public static int findAllSubarraysWithGivenSum(int arr[], int s) {
        Map<Integer, Integer> preSumMap = new HashMap<>();
        int n = arr.length; 
        int preSum = 0, cnt = 0;
        preSumMap.put(0, 1);
        for (int i = 0; i < n; i++) {
            // add current element to prefix Sum:
            preSum += arr[i];

            // Calculate x-k:
            int remove = preSum - s;

            // Add the number of subarrays to be removed:
            cnt += preSumMap.getOrDefault(remove, 0);

            // Update the count of prefix sum
            // in the map.
            preSumMap.put(preSum, preSumMap.getOrDefault(preSum, 0) + 1);
        }  
        return cnt;
    }
}
