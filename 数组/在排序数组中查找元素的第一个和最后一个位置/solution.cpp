class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        if (nums.size()==0) {
            return ans;
        }
        int left = 0, right = nums.size() - 1, mid = 0;
        while (left<=right) {
            mid = (left + right) / 2;
            if (nums[mid]==target) {
                left = mid;
                right = mid;
                while (left>=0 && nums[left]==target) {
                    --left;
                }
                while (right<nums.size() && nums[right]==target) {
                    ++right;
                }
                ans[0] = left + 1;
                ans[1] = right - 1;
                return ans;
            }
            else {
                if (nums[mid]>target) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }
        }
        return ans;
    }
};