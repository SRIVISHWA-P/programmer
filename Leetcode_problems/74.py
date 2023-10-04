# 74. Search a 2D Matrix
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m = len(matrix)
        n = len(matrix[0])
        low = 0
        high = (n * m) - 1
        while low <= high:
            mid = (low + high) // 2
            row = mid // n
            col = mid % n
            if target == matrix[row][col]:
                return True
            elif target > matrix[row][col]:
                low = mid + 1
            else:
                high = mid - 1
        return False
