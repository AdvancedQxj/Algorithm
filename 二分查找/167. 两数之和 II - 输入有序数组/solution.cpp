class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len = numbers.size();
        for (int i=0; i<len-1; ++i) {
            int left = i + 1,right = len - 1;
            while (left<=right) {
                int mid = (left + right) / 2;
                if (numbers[i]+numbers[mid]==target) {
                    return {++i, ++mid};
                }
                else if (numbers[i]+numbers[mid]<target) {
                    left = ++mid;
                }
                else {
                    right = --mid;
                }
            }
        }
        return {0, 0};
    }
};