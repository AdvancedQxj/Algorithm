#!/usr/bin/env python
# coding: utf-8

class Solution:
    def isPalindrome(self, x: int) -> bool:
        if (x < 0):
            return False
        y = 0
        z = x
        while (x != 0):
            y = y * 10 + x % 10
            x = x // 10
        return y == z