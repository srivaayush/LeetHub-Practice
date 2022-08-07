class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& item1, vector<vector<int>>& item2) {
        map<int,int> mp;
        for(auto &x:item1){
            if(mp.find(x[0])!=mp.end())
                mp[x[0]]+=x[1];
            else
                mp[x[0]]=x[1];
        }
        for(auto &x:item2){
            if(mp.find(x[0])!=mp.end())
                mp[x[0]]+=x[1];
            else
                mp[x[0]]=x[1];
        }
        vector<vector<int>> ans;
        for(auto &x:mp)
            ans.push_back({x.first,x.second});
        return ans;
    }
};