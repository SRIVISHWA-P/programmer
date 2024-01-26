
class Solution {
    public static void selectionSort(int[] arr) {
        int n = arr.length;
        for(int i=0;i<n-1;i++){
            int minIndex=i;
            int minElement= arr[i];
            for(int j=i+1;j<n;j++){
                if(arr[j]<minElement){
                    minElement=arr[j];
                    minIndex=j;
                }
            }
            if(minIndex!=i){
                int temp = arr[i];
                arr[i] = minElement;
                arr[minIndex] = temp;
            }
        }
    }
}