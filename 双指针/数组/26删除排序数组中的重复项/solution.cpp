class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()){
            return 0;
        }
        int i, j;
        i = 1;
        j = 0;
        while (i<nums.size()){
            if (nums[i]==nums[j]){
                i++;
            }
            else{
                nums[++j] = nums[i];
            } 
        }
        return j+1;
    }
};