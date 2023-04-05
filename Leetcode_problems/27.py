class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        new=nums
        n=len(nums)-1
        k=0
        for i in new:
            if i==val:
                n-=1
            else:
                nums[k]=i
                k+=1
        return k
