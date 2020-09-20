class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, left = 0, right = height.size() - 1, h = 0;
        while (left<right){
            if (height[left]>height[right]){
                h = height[right];
                ans = ans>(right-left)*h? ans: (right-left)*h;
                --right;
            }
            else {
                h = height[left];
                ans = ans>(right-left)*h? ans: (right-left)*h;
                ++left;
            }
        }
        return ans;
    }
};