//Ceil And floor finding program

import java.util.* ;
import java.io.*; 

public class Solution {
    public static int[] getFloorAndCeil(int[] a, int n, int x) {
      int low =0;
      int high = n-1;
      int floor =-1;
      int ceil = -1;
      int mid=0;
      while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==x){
          return new int[]{x,x};
        }
        else if( a[mid]>= x){
          ceil = a[mid];
          high = mid-1;
        }
        else{
          floor=a[mid];
          low = mid+1;
        }
      }
      return new int[]{floor,ceil};
    }
    
}
