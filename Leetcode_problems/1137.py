#Tribonacci series
class Solution:
    def tribonacci(self, n: int) -> int:
        if n==0:
            return 0
        elif n==1:
            return 1
        elif n==2:
            return 1
        else:
            a=0
            b=1
            c=1
            sum=0
            for i in range(3,n+1):
                sum=a+b+c
                a=b
                b=c
                c=sum
            return sum