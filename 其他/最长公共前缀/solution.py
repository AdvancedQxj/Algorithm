class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if ("" in strs):
            return ""
        elif (len(strs)==1):
            return strs[0]
        else:
            ans = ''
            for i in zip(*strs):
                if (len(set(i))==1):
                    ans =  ans + i[0]
                else:
                    break
            return ans
