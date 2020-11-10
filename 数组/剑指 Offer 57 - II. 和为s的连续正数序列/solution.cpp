//empalce_back 比 push_back 更好替我们省去了调用CText进行构造。
//emplace_back 添加一个新元素到结束的容器。该元件是构成在就地，即没有复制或移动操作进行。
class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans1;
        vector<int> ans2;
        int count = 0;
        for (int i=1; i<=(target-1)/2; i++){
            int j = i;
            while (count<target){
                ans2.emplace_back(j);
                count += j;
                j++;
            }
            if (count==target){
                ans1.emplace_back(ans2);
            }
            count = 0;
            ans2.clear();
        }
        return ans1;
    }
};