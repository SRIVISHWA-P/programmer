#Majority element
class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        temp = list(set(nums))
        result = map(lambda x: nums.count(x), temp)
        new=list(result)
        return temp[new.index(max(new))]