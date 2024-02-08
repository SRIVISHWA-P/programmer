//Using Moore's voting algorithm
public class Solution {
    public static int majorityElement(int []v) {
        int n = v.length;
        int count = 0, ele = 0;
        for(int i=0;i<n;i++){
            if(count==0){
                count++;
                ele = v[i]; 
            }
            else if(v[i]== ele)
                count++;
            else
                count--;
        }
        return ele;
    }
}
