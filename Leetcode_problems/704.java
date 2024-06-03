//Binary Search
class Solution {
    public int search(int[] nums, int target) {
        return BinarySearch(nums, 0, nums.length-1,target);
    }

    public int BinarySearch(int[] nums, int low, int high, int target){
        if(low <= high){
            int mid = (low+high)/2;
            if(nums[mid]==target)
                return mid;
            else if (nums[mid]>target)
                high = mid-1;
            else
                low = mid+1;
            return BinarySearch(nums, low,high,target);
        }
        return -1;        
    }
}
