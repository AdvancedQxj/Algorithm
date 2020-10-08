class Solution {
public:
    vector<int> subSort(vector<int>& array) {
        int left = -1, right = -1;
        int min = INT_MAX, max = INT_MIN;
        for (int i=0; i<array.size(); ++i) {
            if (array[i]<max) {
                right = i;
            }
            else {
                max = array[i];
            }
        }
        for (int i=array.size()-1; i>=0; --i) {
            if (array[i]>min) {
                left = i;
            }
            else {
                min = array[i];
            }
        }
        return {left, right};
    }
};