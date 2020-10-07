class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int nums1_length = nums1.size(), nums2_length = nums2.size();
        int index1 = 0, index2 = 0;
        while (index1<nums1_length && index2<nums2_length) {
            if (nums1[index1]<nums2[index2]) {
                ++index1;
            }
            else if (nums2[index2]<nums1[index1]) {
                ++index2;
            }
            else {
                ans.emplace_back(nums1[index1]);
                ++index1;
                ++index2;
            }
        }
        return ans;
    }
};