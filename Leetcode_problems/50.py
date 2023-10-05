class Solution:
    def myPow(self, x: float, n: int) -> float:
        ans = 1.0
        temp = n if (n > 0) else -n
        while temp:
            if temp % 2 == 1:
                ans *= x
                temp -= 1
            else:
                x = x * x
                temp //= 2

        return 1.0 / ans if (n < 0) else ans
