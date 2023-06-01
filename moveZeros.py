def moveZeroes(self, nums):
    if(len(nums) == 0 or len(nums) == 1):
        return
    start = 0
    for val in nums:
        if(val != 0):
            nums[start] = val
            start += 1
        
    while(start < len(nums)):
        nums[start] = 0
        start += 1
   
#this is a comment to test git commands