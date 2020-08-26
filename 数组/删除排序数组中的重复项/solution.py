class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if not nums:
            return 0
        else:
            nums_len = len((set(nums)))
            tag = nums[0]
            index = 1
            while (index<nums_len):
                for i in nums[1:]:
                    if (i>tag):
                        nums[index] = i
                        tag = i
                        index = index + 1
            return nums_len