#!/usr/bin/env python
# coding: utf-8

class Solution:
    def reverse(self, x: int) -> int:
        x_str = str(x)
        if '-' in x_str:
            ans = int(x_str[:0:-1])
            if (-2**31 < -ans):
                return -ans
            else:
                return 0
        ans = int(x_str[::-1])
        if (ans < 2**31 - 1):
            return ans
        else:
            return 0

