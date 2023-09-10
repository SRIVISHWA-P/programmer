# 56.Merge Intervals
class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        arr = []
        for i in intervals:
            start = i[0]
            end = i[1]
            if len(arr) == 0 or i[0] > arr[-1][1]:
                arr.append(i)
            else:
                arr[-1][1] = max(arr[-1][1], i[1])
        return arr
