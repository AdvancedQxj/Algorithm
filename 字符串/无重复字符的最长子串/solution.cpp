class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> s_set;
        int count = 0;
        int ans = 0;
        for(int i=0; i<s.size(); ++i){
            if (!s_set.count(s[i])){
                s_set.insert(s[i]);
                ++count;
            }
            else{
                s_set.erase(s[i-count]);
                --i;
                --count;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};