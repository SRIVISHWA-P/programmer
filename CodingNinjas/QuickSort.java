class Solution {
    public static int partition(int[] arr, int low, int high) {
        // choosing the pivot;
        int pivot = arr[low];
        int i = low;
        int j = high;
        while (i < j) {
            while (arr[i] <= pivot && i < high)
                i++;
            while (arr[j] > pivot && j > low)
                j--;
            if (i < j) { // checking whether they crossed or not
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[j];
        arr[j] = pivot; // pivot represents arr[low]
        arr[low] = temp;
        return j;
    }

    public static void quickSort(int[] input, int startIndex, int endIndex) {
        if (startIndex < endIndex) {
            int p = partition(input, startIndex, endIndex);
            quickSort(input, startIndex, p - 1);
            quickSort(input, p + 1, endIndex);
        }
    }

}

// for descending we want to change
// while(arr[i]<=pivot&&i<high) as while(arr[i]>=pivot&&i<high) and
// while (arr[j]>pivot&&j>low) as while(arr[j]<pivot&&j>low)
