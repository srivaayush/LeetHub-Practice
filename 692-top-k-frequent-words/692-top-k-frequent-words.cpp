class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;
        map<int,vector<string>,greater<int> > mp1;
        vector<string> ans;
        
        for(auto &x:words){
            mp[x]++;
        }
        
        for(auto &x:mp){
            mp1[x.second].push_back(x.first);
        }
        
        for(auto &x:mp1){
            // reverse(x.second.begin(),x.second.end());
            for(int i=0;i<x.second.size() && k>0 ;i++){
                ans.push_back(x.second[i]);
                k--;
            }
        }
        return ans;
    }
};