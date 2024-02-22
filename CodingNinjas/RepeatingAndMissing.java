public class Solution {
    public static int[] findMissingRepeatingNumbers(int []a) {
        int n = a.length;
        int xr = 0;

        for(int i=0;i<n;i++){
            xr = xr ^ a[i];
            xr = xr ^ i+1; 
        }

        int num = xr & ~(xr-1) ; //finding differentiating bit number

        int one=0; int zero = 0;

        for(int i=0;i<n;i++){
            if((a[i] & num) !=0){
                one = one ^ a[i];
            }
            
            else{
                zero = zero ^ a[i];
            }

            if(( (i+1) & num) !=0){
                one = one ^ (i+1);
            }

            else{
                zero = zero ^ (i+1);
            }
        }

        int countOne=0;
        for(int i=0; i<n; i++){
            if(a[i]== one)
                countOne++; 
        }

        if(countOne == 2){
            int[] arr = {one,zero};
            return arr;        
            }
        else{
            int[] arr = {zero,one};
            return arr;
            }        
    }
}
