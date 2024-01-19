// Reverse the integer
class Solution {
    public int reverse(int x) {
        int temp = Math.abs(x);
        int num = 0;
        while (temp != 0) {
            int digit = temp % 10;
            if (num > (Integer.MAX_VALUE - digit) / 10) {
                return 0;
            }
            num = num * 10 + digit;
            temp = temp / 10;
        }
        return (x >= 0) ? num : -num;
    }
}