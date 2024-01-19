//palindrome of a number

import java.util.Scanner;

class Solution {
    public static boolean palindrome(int num) {
        int rev = 0;
        int temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }
        return (rev == num) ? true : false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println(palindrome(num));
        sc.close();
    }
}