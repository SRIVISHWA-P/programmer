# rotate k elements to right
class Solution:
    def rotate(self, nums: list[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k = k % n
        nums[n - k :] = nums[n - k :][::-1]
        nums[: n - k] = nums[: n - k][::-1]
        nums[:] = nums[::-1]
