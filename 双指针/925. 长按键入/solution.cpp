class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0;
        int size = name.size();
        for(auto ch: typed) {
            if(name[i]==ch) ++i;
            if(name[i-1]!=ch) return false;
        }
        return size==i;
    }
};