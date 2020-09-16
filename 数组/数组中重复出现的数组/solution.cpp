class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        map<int, int> myMap;
        for (int i=0; i<nums.size(); ++i){
            if (myMap[nums[i]]) {
                return nums[i];
            }
            myMap[nums[i]] = 1;
        }
        return 0;
    }
};