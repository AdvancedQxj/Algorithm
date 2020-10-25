class Solution {
public:
    bool isValid(string s) {
        map <char, char> dic = {
            {'(', ')'}, 
            {'[', ']'}, 
            {'{', '}'}
            };
        string str = "";
        for (int i=0; i<s.size(); i++){
            if (dic.count(s[i])){
                str = str + s[i];
            }
            else if(!str.empty()){
                char ch = str[str.size()-1];
                str.pop_back();
                if (s[i]!=dic[ch]){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return str.empty();
    }
};