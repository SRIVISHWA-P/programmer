# 48.Rotate Image
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        # Transpose of the matrix
        for i in range(len(matrix)):
            for j in range(i + 1, len(matrix[0])):
                temp = matrix[i][j]
                matrix[i][j] = matrix[j][i]
                matrix[j][i] = temp

        # reversing the rows
        for i in matrix:
            i[::] = i[::-1]
