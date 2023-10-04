# 73.Sort Colors
class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # Using Dutch national flag Algorithm
        low, mid, temp = 0, 0, 0
        high = len(nums) - 1
        while mid <= high:
            if nums[mid] == 0:
                temp = nums[mid]
                nums[mid] = nums[low]
                nums[low] = temp
                mid += 1
                low += 1
            elif nums[mid] == 1:
                mid += 1
            elif nums[mid] == 2:
                temp = nums[mid]
                nums[mid] = nums[high]
                nums[high] = temp
                high -= 1
