class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        digits_len = len(digits) - 1
        for i in digits[::-1]:
            if (i==9):
                digits[digits_len] = 0
                digits_len = digits_len - 1
            else:
                digits[digits_len] = digits[digits_len] + 1
                return digits
        digits.insert(0, 1)
        return digits