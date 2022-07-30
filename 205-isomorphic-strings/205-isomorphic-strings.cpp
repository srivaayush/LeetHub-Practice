class Solution {
public:
    bool isIsomorphic(string t, string s) {
        map<char,char> mp,mp1;
        int n=s.size();
        // map<char,char>mp;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i]) return false;
            }
            else  mp[s[i]]=t[i];
        }
        for(int i=0;i<n;i++){
            if(mp1.find(t[i])!=mp1.end()){
                if(mp1[t[i]]!=s[i]) return false;
            }
            else  mp1[t[i]]=s[i];
        }
        return true;
    }
};

// "badc"
// "baba"