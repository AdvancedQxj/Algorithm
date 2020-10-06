class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> myHash;
        for (int i=0; i<nums.size(); ++i) {
            if (myHash.find(target-nums[i]) != myHash.end()) {
                return {myHash[target-nums[i]], i};
            }
            else {
                myHash[nums[i]] = i;
            }
        }
        return {};
    }
};