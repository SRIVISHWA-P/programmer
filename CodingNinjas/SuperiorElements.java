import java.util.*;
public class Solution {
    public static List< Integer > superiorElements(int []a) {
        int max = Integer.MIN_VALUE; 
        int n=a.length;
        List<Integer> ans = new ArrayList<>();
        for(int i=n-1 ; i>=0; i--){
            if(a[i]>max){
                max = a[i];
                ans.add(a[i]);
            }
        }
        return ans;
    }
}
