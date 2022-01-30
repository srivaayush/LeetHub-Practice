class Solution {
public:
    int getSum(int a, int b) {
        int c; 
        while(b !=0 ){            
            c = (a&b);
            a = a^b;
            b = (unsigned int)(c)<<1;
        }
        return a;
    }
};