class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left = 1, right = nums.size() - 1, ans = -1;
        while (left<right) {
            int mid = (left + right) / 2, count = 0;
            for (int i=0; i<nums.size(); ++i) {
                count += nums[i]<=mid;
            }
            if (count<=mid) {
                left = mid + 1;
            }
            else {
                right = mid;
            }
        }
        return left;//left==right
    }
};