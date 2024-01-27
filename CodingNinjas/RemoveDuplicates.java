//Removing Duplicates from a sorted array 
class Solution {
    public static int removeDuplicates(int[] arr, int n) {
        int i = 0;
        int j = 0;
        while (j < n) {
            if (arr[j] != arr[i])
                arr[++i] = arr[j];
            j++;
        }
        return i + 1;
    }
}