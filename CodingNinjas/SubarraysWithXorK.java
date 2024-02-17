import java.util.HashMap;
import java.util.Map;

//PreXOr method
public class Solution {
    public static int subarraysWithSumK(int []a, int b) {
        int xr = 0; int n = a.length;
        Map<Integer,Integer> hMap = new HashMap<>();
        hMap.put(xr, 1); 

        int count=0;
        for(int i=0;i<n;i++){
            xr = xr ^ a[i];
            int x = xr^b;
            if(hMap.get(x)!=null)
                count+=hMap.get(x);

            if(hMap.containsKey(xr))
                hMap.put(xr, hMap.get(xr)+1);
            else
                hMap.put(xr, 1);
        }

        return count;

    }
}
