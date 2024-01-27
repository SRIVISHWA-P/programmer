class Solution {
    public static int[] getSecondOrderElements(int n, int[] a) {
        int largest = a[0], smallest = a[0], sL = -1, sS = Integer.MAX_VALUE;
        for (int i = 1; i < a.length; i++) {
            if (a[i] > largest)
                largest = a[i];
            if (a[i] < smallest)
                smallest = a[i];
        }
        for (int i = 0; i < a.length; i++) {
            if (a[i] > sL && a[i] != largest)
                sL = a[i];
            if (a[i] < sS && a[i] != smallest)
                sS = a[i];
        }
        int arr[] = { sL, sS };
        return arr;
    }
}