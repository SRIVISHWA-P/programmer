class Solution {
    public static int calcGCD(int n, int m) {
        if (m < n) {
            if (n % m == 0)
                return m;
            else
                return calcGCD(m, n % m);
        } else if (m % n == 0)
            return n;
        else
            return calcGCD(n, m % n);
    }
}
