class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> cnt(26,0);int ans=0;
        for(auto &x:s){
            cnt[x-'a']++;
        }
        for(auto &x:t){
            cnt[x-'a']--;
        }
        for(int i=0;i<26;i++)
            // cout<<char(i+'a')<<"   "<<cnt[i]<<endl;
            ans+=abs(cnt[i]);
        return ans;
        
    }
};