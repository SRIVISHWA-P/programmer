//maximun consecutive ones

class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int max = 0, count = 0, n = nums.length;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count++;
                if (count > max)
                    max = count;
            } else {
                count = 0;
            }
        }
        return max;
    }
}