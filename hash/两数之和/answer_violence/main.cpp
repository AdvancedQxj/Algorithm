#include <vector>
using namespace std;
/*
 * 两次循环
 * */
class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0; i < nums.size(); i++){
            for (int j=i+1; j<nums.size(); j++){
                if (nums[j] + nums[i] == target){
                    return { i, j };
                }
            }
        }
        return {};
    }
};
int main() {
    Solution so;
    vector<int> test = {2,7,11,15};
    int target = 9;
    so.twoSum(test, target);
    return 0;
}
