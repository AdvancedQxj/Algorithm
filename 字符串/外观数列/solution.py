class Solution:
    def countAndSay(self, n: int) -> str:
        if n==1:
            return "1"
        else:
            pre = self.countAndSay(n-1)
            ans = ''
            i = 0
            # for i in range(len(pre)):
            #     if (i!=len(pre)-1):
            #         if (pre[i]==pre[i+1]):
            #             count = count + 1
            #         else:
            #             ans = ans + str(count) + pre[i]
            #             count = 1
            
            #使用枚举遍历速度会快很多,但是会增加内存
            for j, c in enumerate(pre):
                if c!=pre[i]:
                    ans += str(j-i) + pre[i]
                    i = j
            ans += str(len(pre)-i) + pre[-1]
            return ans