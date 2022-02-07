class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum=0;
        for(auto &x:t)
            sum+=x-'0';        
        for(auto &x:s)
            sum=sum-(x-'0');
        
        return sum+'0';
    }
};