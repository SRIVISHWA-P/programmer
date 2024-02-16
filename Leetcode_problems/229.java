//Majority Element greater than n/3 times 
class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int el1=-1,el2=-1,count1=0,count2=0;
        int n = nums.length;
        for(int i=0;i<n;i++){
            if(count1==0 && nums[i] != el2){
                el1 = nums[i];
                count1=1;
            }
            else if(count2 == 0 && nums[i] != el1){
                el2 = nums[i];
                count2=1;
            }
            else if(nums[i]==el1)
                count1++;
            else if(nums[i]==el2)
                count2++;
            else{
                count1--;
                count2--;
            } 
        }
        List<Integer> ls = new ArrayList<>();
        count1 = 0; count2 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == el1) count1++;
            if (nums[i] == el2) count2++;
        }

        int mini = (int)(n / 3) + 1;
        if (count1 >= mini) ls.add(el1);
        if (count2 >= mini && el1!=el2) ls.add(el2);
        return ls;    
    }
}
