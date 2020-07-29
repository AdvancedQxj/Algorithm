#include <vector>
#include <unordered_map>
using namespace std;

/*
 *unordered_map无序映射,查找时间复杂度为O(1),消耗比较多的内存
 * */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> myHash;
        //将数组转换为 hash
        for (int i = 0; i < nums.size(); i++){
            myHash[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(myHash.find(target-nums[i]) != myHash.end())
                return {i, myHash[target-nums[i]]};
        }
        return {};
    }
};
int main() {
    Solution so;
    vector<int> test = {2, 7, 11,15};
    int target = 9;
    so.twoSum(test, target);
    return 0;
}
