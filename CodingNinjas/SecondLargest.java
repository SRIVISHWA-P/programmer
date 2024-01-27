//optimal approach using two pointer method
class Solution {
    public static int[] getSecondOrderElements(int n, int[] a) {
        int largest = a[0], smallest = a[0], sL = -1, sS = Integer.MAX_VALUE;
        for (int i = 1; i < a.length; i++) {
            if (a[i] > largest) {
                sL = largest;
                largest = a[i];
            } else if (a[i] < largest && a[i] > sL)
                sL = a[i];

            if (a[i] < smallest) {
                sS = smallest;
                smallest = a[i];
            } else if (a[i] != smallest && a[i] < sS)
                sS = a[i];
        }
        int arr[] = { sL, sS };
        return arr;
    }
}