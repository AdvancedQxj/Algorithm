#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x != 0){
            if (rev > INT_MAX / 10|| rev < INT_MIN / 10)
                return 0;
            rev *= 10;
            rev += x % 10;
            x   /= 10;
        }
        return rev;
    }
};

int main() {
    
    Solution so;
    int test = 123;
    int ans = so.reverse(test);
    cout<<ans<<endl;
    return 0;
}
