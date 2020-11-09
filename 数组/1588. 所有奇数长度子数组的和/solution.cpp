class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0, n = arr.size();
        for(int i=0; i<arr.size(); ++i) {
            int left = i + 1, right = n - i;
            int left_even = (left + 1) / 2, right_even = (right + 1) / 2;
            int left_odd = left / 2, right_odd = right / 2;
            ans += arr[i] * (left_even * right_even + left_odd * right_odd);
        }
        return ans;
    }
};