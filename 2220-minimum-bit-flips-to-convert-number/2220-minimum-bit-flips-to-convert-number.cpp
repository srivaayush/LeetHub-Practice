class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<64> b1(start);
        bitset<64> b2(goal);
        int ans=0;
        string s1=b1.to_string();
        string s2=b2.to_string();
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])ans++;
        }
        return ans;
    }
};