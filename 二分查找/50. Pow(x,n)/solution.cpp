class Solution {
public:
    double calculation(double x, long n) {
        double ans = 1.0;
        if (n==0) {
            return ans;
        }
        while (n>0) {
            if (n%2==1) {
                ans *= x;
            }
            x *= x;
            n /= 2;
        }
        return ans;
    }

    double myPow(double x, int n) {
        long nn = n;
        return nn>=0? calculation(x, nn): 1/calculation(x, -nn);
    }
};