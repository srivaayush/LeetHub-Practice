class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        map<string,int> mp;
        string st="";
        for(auto &x:s){
            st+=x;
            mp[st]++;
        }
        int ans=0;
        for(auto &x:words){
            ans+=mp[x];
        }
        return ans;
    }
};