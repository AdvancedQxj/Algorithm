# -*- encoding: utf-8 -*-
from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for id, value in enumerate(nums):
            if target - value in hashmap:
                return [hashmap[target-value],id]
            hashmap[value] = id