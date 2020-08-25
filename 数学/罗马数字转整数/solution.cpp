class Solution {
public:
    int romanToInt(string s) {
        map<char, int> dic;
        dic['I'] = 1;
        dic['V'] = 5;
        dic['X'] = 10;
        dic['L'] = 50;
        dic['C'] = 100;
        dic['D'] = 500;
        dic['M'] = 1000;
        int len = s.length();
        int ans = 0;
        for (int i=0; i<len; i++ ){
            if (i<len-1 && dic[s[i]]<dic[s[i+1]]){
                ans -= dic[s[i]];
            }
            else{
                ans += dic[s[i]];
            }
        }
        return ans;
    }
};
