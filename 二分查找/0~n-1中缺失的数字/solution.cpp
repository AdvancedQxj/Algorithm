class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if (nums[0]!=0){
            return 0;
        }
        int left = 0, right = nums.size() - 1, ans = 0;
        while (left<=right){
            ans = (left + right) / 2;
            if (nums[ans]==ans){
                left = ans + 1;
            }
            if (nums[ans]>ans){
                if (nums[ans-1]==ans-1){
                    return ans;
                }
                right = ans - 1;
            }
        }
        return nums.size();
    }
};