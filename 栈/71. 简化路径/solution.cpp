class Solution {
public:
    string simplifyPath(string path) {
        path += "/";
        stack<string> stack;
        string str;
        for(auto c: path) {
            if(c=='/') {
                if(str==".." && !stack.empty()) {
                    stack.pop();
                }else if (str!=".." && str!="." && !str.empty()) {
                    stack.push(str);
                }
                str.clear();
            }else {
                str += c;
            }
        }
        string ans;
        while(!stack.empty()) {
            string s = stack.top();
            stack.pop();
            ans = "/" + s + ans;
        }
        if(ans.empty()) return "/";
        return ans;
    }
};