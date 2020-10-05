class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x, ans = -1;
        while (left<=right) {
            int mid = (left + right) / 2;
            //只能使用乘法，排除0
            //强制转换long,mid*mid可能超出int范围
            if ((long)mid*mid<=x) {
                ans = mid;
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return ans;
    }
};