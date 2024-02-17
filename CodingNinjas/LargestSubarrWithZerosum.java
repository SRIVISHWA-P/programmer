import java.util.HashMap;
import java.util.Map;

//Prefix Sum Method
public class Solution {
    public static int getLongestZeroSumSubarrayLength(int []arr){
        int maxLen = 0;
        int sum =0;
        int n = arr.length;
        Map<Integer,Integer> hMap = new HashMap<>();
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum == 0)
                maxLen = i+1;
            else if(hMap.get(sum)!=null)
                maxLen = Math.max(maxLen, i-hMap.get(sum));
            else
                hMap.put(sum, i);
        }
        return maxLen;
    }
}
