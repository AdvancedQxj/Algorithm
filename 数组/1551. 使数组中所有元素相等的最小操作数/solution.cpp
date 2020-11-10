class Solution {
public:
    int minOperations(int n) {
        return n * n / 4;
        // if(n%2==0) return n * n / 4;
        // else return (n + 1) * (n - 1) / 4;
    }
};