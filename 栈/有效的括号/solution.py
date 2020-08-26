class Solution:
    def isValid(self, s: str) -> bool:
        dic = {'(': ')', '[': ']', '{': '}'}
        stack = []
        for i in s:
            if i in dic:
                stack.append(i)
            elif stack:
                j = stack.pop()
                if (i!=dic[j]):
                    return False
            else:
                return False
        return not stack