//move zeroes to the end

class Solution {
    public void moveZeroes(int[] nums) {
        int j = -1;
        int i = 0;
        int n = nums.length;
        for (i = 0; i < n; i++) { // moving j to point to first zero
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }
        if (j != -1) { // the array ontain zeros
            for (i = j + 1; i < n; i++) {
                if (nums[i] != 0) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    j++;
                }
            }
        }
    }
}