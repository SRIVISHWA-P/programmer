# 41. First Missing Positive


class Solution:
    def firstMissingPositive(self, nums: list[int]) -> int:
        nums = [x for x in nums if x > 0]

        # If the list is empty or only contains 1 element
        if not nums:
            return 1
        elif len(nums) == 1:
            if nums[0] == 1:
                return 2
            else:
                return 1

        # Sort the list
        nums.sort()

        # Check if the first element is greater than 1, return 1
        if nums[0] != 1:
            return 1

        # Check for missing positive integers
        for i in range(len(nums) - 1):
            if nums[i + 1] - nums[i] > 1:
                return nums[i] + 1

        # If no missing positive integers, return the next positive integer
        return nums[-1] + 1
