import java.util.*;

public class Solution {
    public static int numberOfInversions(int []a, int n) {
        return mergeSort(a, 0, n-1);
    }

    public static int mergeSort(int[] a, int low, int high){
        int count = 0;
        if(low>=high)
            return count;
        int mid = (low+high)/2;
        count+=mergeSort(a, low, mid);
        count+=mergeSort(a, mid+1, high);
        count+=merge(a, low, mid, high);
        return count;
    }

    public static int merge(int[] a, int low, int mid, int high){
    int count = 0;
    List<Integer> temp = new ArrayList<>();
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(a[left] <= a[right]){
            temp.add(a[left]);
            left++;
        } else {
            temp.add(a[right]);
            right++;
            count += (mid - left) + 1; // updating count of inversions
        }
    }

    while(left <= mid){
        temp.add(a[left]);
        left++;
    }

    while(right <= high){
        temp.add(a[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        a[i] = temp.get(i - low);
    }

    return count;
}

}
