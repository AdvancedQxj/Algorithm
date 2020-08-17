#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int y = 0;
        if (x < 0 || (x%10 == 0 && x != 0)){
            return false;
        }
        while(x > y){
            y = y * 10 + x %10;
            x /= 10;
        }
        return x == y || x == y/10;
    }
};

int main() {
    Solution so;
    bool ans = so.isPalindrome(121);
    cout<<ans<<endl;
    return 0;
}
