class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int arraySum = 0;
        for (int i = 0; i < n; i++)
            arraySum += nums[i];
        int rangeSum = n * (n + 1) / 2;
        return rangeSum - arraySum;
    }
}