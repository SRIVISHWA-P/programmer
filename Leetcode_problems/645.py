# 645. Set Mismatch


# This is a mathematical solution based on equation solving
class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)
        val1 = sum(range(1, n + 1))
        val2 = n * (n + 1) * (2 * n + 1) // 6
        val3, val4 = 0, 0
        for i in nums:
            val3 += i
            val4 += i * i
        sum1 = val3 - val1
        sum2 = val4 - val2
        sum2 = sum2 // sum1
        x = (sum1 + sum2) // 2
        y = x - sum1
        return [x, y]
