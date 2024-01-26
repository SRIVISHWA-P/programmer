class Solution {

    public static void mergeSort(int[] arr, int l, int r){
        if(l>=r)
            return;
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr,mid+1, r);
        merge(arr,l,mid,r);
    }

    public static void merge(int[] arr, int l,int mid, int r){
        int left = l;
        int right = mid+1;
        int temp[] = new int[r+1];
        int ind = 0;
        while(left<=mid && right<=r){
            if(arr[left]<=arr[right]){
                temp[ind]= arr[left];
                ind++;
                left++;
            }
            else{
                temp[ind]= arr[right];
                ind++;
                right++;
            }
        }
        while(left<=mid){
            temp[ind]= arr[left];
            ind++;
            left++;
        }
        while(right<=r){
            temp[ind]= arr[right];
            ind++;
            right++;
        }
        for(int i=l;i<=r;i++){
            arr[i] = temp[i-l];
        }
    }
}
