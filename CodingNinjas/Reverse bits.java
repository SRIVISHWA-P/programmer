//Reverse Bits

class Solution {
    public static long reverseBits(long n) {
        if (n == 0)
            return 0;
        else if (n == 1)
            return (int) Math.pow(2, 31);
        else {
            long temp = n;
            long result = 0;
            int power = 31;
            while (true) {
                long rem = temp % 2;
                if (rem != 0) {
                    result += (long) Math.pow(2, power);
                }
                power--;
                temp /= 2;
                if (temp == 1) {
                    return result += (long) Math.pow(2, power);
                }
            }
        }
    }
}
