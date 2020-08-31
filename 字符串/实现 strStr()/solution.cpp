//耗时耗内存
// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         if (needle.size()==0){
//             return 0;
//         }
//         else{
//             for (int i=0; i<haystack.size(); i++){
//                 if (haystack[i]==needle[0]){
//                     if (haystack.substr(i, needle.size())==needle){
//                         return i;
//                     }
//                 }
//             }
//             return -1;
//         }
//     }
// };
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size()==0){
            return 0;
        }
        else if (needle.size()>haystack.size()){
            return -1;
        }
        else{
            int j = 0;
            for (int i=0; i<haystack.size();){
                if (haystack[i]==needle[j]){
                    if (j==needle.size()-1){
                        return i - j;
                    }
                    else{
                        i++;
                        j++;
                    }
                }
                else{
                    i = i - j + 1;
                    j = 0;
                }
            }
            return -1;
        }
    }
};