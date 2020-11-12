class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0, j = 1, ans = 0;
        while (j<prices.size()) {
            if (prices[j]<prices[j-1]) {
                ans = ans + prices[j-1] - prices[i];
                i = j;
            }
            ++j;
        }
        if (prices[j-1]>prices[i]) {
            ans = ans + prices[j-1] - prices[i];
        }
        return ans;
    }
};