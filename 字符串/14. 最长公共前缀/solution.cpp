class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (!strs.size()){
            return "";
        }
        else if (strs.size()==1){
            return strs[0];
        }
        else{
            int len = strs[0].size();
            int count = strs.size();
            for (int i=0; i<len; i++){
                char c = strs[0][i];
                for (int j=1; j<count; j++){
                    if (i==strs[j].size() || c!=strs[j][i]){
                        return strs[0].substr(0,i);
                    }
                }
            }
            return strs[0];
        }
    }
};