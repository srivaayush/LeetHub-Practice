class Solution {
public:
    int numberOfSteps(int n) {
        if(n==0)return 0;
        return __builtin_popcount(n)+log2(n);
    }
};