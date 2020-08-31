class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp ,count;
        count = 1;
        for (int i=0; i+count<nums.size(); i++){
            if (nums[i]==0){
                if (nums[i]==0 && nums[i+count]==0){
                    count++;
                    i--;
                }
                else{
                    temp = nums[i];
                    nums[i] = nums[i+count];
                    nums[i+count] = temp;
                }
            }
        }
    }
};