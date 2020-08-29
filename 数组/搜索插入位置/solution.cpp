class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int min = 0;
        int max = nums.size() - 1;
        while(min<=max){
            int mid = (min + max) / 2;
            if(nums[mid]>target){
                max = mid - 1;
            }
            else if(nums[mid]<target){
                min = mid + 1;
            }
            else{
                return mid;
            }
        }
        return min;
    }
};