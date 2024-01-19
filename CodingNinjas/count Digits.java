class Solution {
    public static int countDigits(int n){
        int countDigits = 0;
        int temp = n;
        while(temp!=0){
            int num = temp%10;
            if(num!=0){
                if(n%num==0)
                    countDigits++;
            }
            temp/=10;
        }
        return countDigits;
    }
}