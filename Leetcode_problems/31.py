class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        break_index = -1
        for i in range(n - 2, -1, -1):
            if nums[i] < nums[i + 1]:
                break_index = i
                break

        if break_index == -1:
            nums[::] = nums[::-1]
            # nums = nums.reverse()
        else:
            for i in range(n - 1, break_index, -1):
                if nums[i] > nums[break_index]:
                    temp = nums[i]
                    nums[i] = nums[break_index]
                    nums[break_index] = temp
                    break
            nums[break_index + 1 : :] = nums[break_index + 1 : :][::-1]
