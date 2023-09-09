# class Solution:
#     def maxSubArray(self, nums: List[int]) -> int:
#         current_sum = nums[0]
#         max_sum = nums[0]
#         for i in range(1, len(nums)):
#             current_sum = max(nums[i], nums[i] + current_sum)
#             max_sum = max(current_sum, max_sum)
#         return max_sum


class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        max_sum = -99999
        current_sum = 0
        for i in nums:
            current_sum += i
            if current_sum > max_sum:
                max_sum = current_sum
            if current_sum < 0:  # ignoring negative values
                current_sum = 0
        return max_sum
