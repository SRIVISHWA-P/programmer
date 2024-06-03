// 35. Search Insert Position
class Solution {
    public int searchInsert(int[] nums, int target) {
        int low = 0;
        int high = nums.length-1;
        int ans = -1;
        int index = -1;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=target){  //Lower Bound Logic
                ans = nums[mid];
                index = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        if(ans ==-1)
            return nums.length;           
        else
            return index;
    }
}
