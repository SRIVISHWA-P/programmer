# Intersection of two arrays
class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        nums1 = list(set(nums1))
        new = []
        for i in nums1:
            if i in nums2:
                new.append(i)
        return new
