class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> myMap;
        int ans = 0;
        for(int i=0; i<nums.size(); ++i) {
            if(myMap.count(nums[i])) myMap.erase(myMap.find(nums[i]));
            else myMap[nums[i]] = i;
        }
        for(auto i: myMap) ans = i.first;
        return ans;
    }
};