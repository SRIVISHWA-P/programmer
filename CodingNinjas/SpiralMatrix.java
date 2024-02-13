import java.util.*;
public class Solution {
    public static int[] spiralMatrix(int [][]MATRIX) {
        int n = MATRIX.length;
        int m = MATRIX[0].length; 
        int[]ans = new int[n*m];
        int ans_index = 0;
        int left = 0, top = 0;
        int right = m-1, bottom = n-1;

        while(top<=bottom && left<=right){
            for(int i=left ; i<=right ; i++)
               ans[ans_index++] = MATRIX[top][i];
            top++;

            for(int j=top; j<=bottom;j++)
               ans[ans_index++] = MATRIX[j][right];
            right--;

            if(top<=bottom){
                for(int i=right; i>=left;i--)
                   ans[ans_index++] = MATRIX[bottom][i];
                bottom--;
            }
            
            if(left<=right){
                for(int j=bottom;j>=top;j--)
                   ans[ans_index++] = MATRIX[j][left];
                left++;
            }
        }
        return ans;
    }
}
