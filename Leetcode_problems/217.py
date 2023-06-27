# contains duplicate or not
from collections import defaultdict


# submission 1
class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        m = defaultdict(int)
        for num in nums:
            m[num] += 1
        for key, value in m.items():
            if value >= 2:
                return True
        return False


# submission 2
class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        m = defaultdict(int)
        for num in nums:
            m[num] += 1
            if (m[num]) == 2:
                return True
        return False


# submission 3
class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        setS = set()
        for num in nums:
            if num in setS:
                return True
            setS.add(num)
        return False
