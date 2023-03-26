#reverse integer

class Solution(object):
    def reverse(self, x):
        if x==0:
            return 0
        elif x>0:
            sum=0
            l=len(str(x))
            for i in range(l):
                sum=sum*10+(x%10)
                x//=10
            if sum>((2**31)-1):
                return 0
            else:
                return sum
        else:
            temp=-x
            sum=0
            l=len(str(temp))
            for i in range(l):
                sum=sum*10+(temp%10)
                temp//=10
            crt_sum=-sum
            if crt_sum<-(2**31):
                return 0
            else:
                return crt_sum
