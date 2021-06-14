'''
两数之和

By WeepingDogel
'''

nums = [1,2,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19]
target = 32
lenth = len(nums)
j = -1
for i in range(lenth):
    if target - nums[i] in nums:
        if nums.count(target - nums[i]) == 1& target - nums[i] == nums[i]:
            continue 
        else:
            j = nums.index(target - nums[i], i+1)
            break
if j > 0:
    print([i,j])