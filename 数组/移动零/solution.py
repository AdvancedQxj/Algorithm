class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        del_nums = []
        count = nums.count(0)
        while(count>0):
            nums.remove(0)
            del_nums.append(0)
            count = count - 1
        nums.extend(del_nums)

