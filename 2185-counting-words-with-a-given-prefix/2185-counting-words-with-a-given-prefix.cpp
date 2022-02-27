class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        int n=pref.size();
        for(auto &x:words){
            if(x.substr(0,n)==pref)ans++;
        }
        return ans;
    }
};