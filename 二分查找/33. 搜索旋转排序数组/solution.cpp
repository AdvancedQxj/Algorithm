class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0, right = len - 1;
        while (left<=right) {
            int mid = (left + right) / 2;
            if (nums[mid]==target) {
                return mid;
            }
            if (nums[0]<=nums[mid]) {
                if (target<nums[mid] && nums[0]<=target) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }
            else {
                if (nums[mid]<target && target<=nums[right]) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }
        return -1;
    }
};