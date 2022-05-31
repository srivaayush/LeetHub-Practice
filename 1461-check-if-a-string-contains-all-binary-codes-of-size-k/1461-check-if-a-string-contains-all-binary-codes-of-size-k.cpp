class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> mp;
        int n=s.size();
        string s1=s.substr(0,k);
        mp.insert(s1);
        for(int i=k;i<n;i++){
            string s2=s1.substr(1);
            s1=s2;s1+=s[i];
            mp.insert(s1);
        }
        return (mp.size()==pow(2,k));
    }
};