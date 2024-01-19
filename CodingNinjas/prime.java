//Printing whether prime or not
class Solution {
    public static String isPrime(int num) {
        if (num == 1)
            return "NO";
        else if (num == 2)
            return "YES";
        else {
            for (int i = 2; i * i < num; i++) {
                if (num % i == 0)
                    return "NO";
            }
            return "YES";
        }
    }
}