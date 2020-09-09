class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> nums_set;
        int max_count = 0;
        int count = 0;
        for (int num : nums){
            nums_set.insert(num);
        }
        for (int num : nums_set){
            if (!nums_set.count(num-1)){
                ++count;
                while(nums_set.count(++num)){
                    ++count;
                }
                max_count = max(max_count, count);
                count = 0;
            }
        }
        return max_count;
    }
};