class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> ans(A.size(), 0);
        int even = 0, odd = 1;
        for(int num: A) {
            if(num % 2 == 0) {
                ans[even] = num;
                even += 2;
            }else {
                ans[odd] = num;
                odd += 2;
            }
        }
        return ans;
    }
};