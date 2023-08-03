# Median of two sorted arrays
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums1 = nums1 + nums2
        print(nums1)
        nums1.sort()
        n = len(nums1)
        print(n)
        return nums1[n // 2] if n % 2 else (nums1[(n // 2) - 1] + nums1[n // 2]) / 2
