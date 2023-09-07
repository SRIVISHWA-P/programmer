# Pascal triangle
# Brute force I tried
# class Solution:
#     def generate(self, numRows: int) -> list[list[int]]:
#         num=[[] for i in range(numRows)]
#         if numRows==1:
#             num[0]=[1]
#             return num
#         else:
#             num[0].append(1)
#             num[1]=[1,1]
#             for i in range(2,numRows):
#                 num[i].append(1)
#                 for j in range(len(num[i-1])-1):
#                     num[i].append(num[i-1][j]+num[i-1][j+1])
#                 num[i].append(1)

#         return num


class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        nums = [[] for i in range(numRows)]

        for i in range(numRows):
            res = 1
            nums[i].append(1)
            for j in range(1, i + 1):
                res = res * ((i + 1) - j)
                res = res // j
                nums[i].append(res)
        return nums
