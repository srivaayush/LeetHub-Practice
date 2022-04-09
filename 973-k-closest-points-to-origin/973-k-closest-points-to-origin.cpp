class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        map<int,vector<vector<int>> > mp;
        for(auto &x:points){
            int s=(x[0]*x[0])+(x[1]*x[1]);
            mp[s].push_back(x);
        }
        
        for(auto &x:mp){
            for(int i=0;i<x.second.size() && k>0; i++){
                ans.push_back(x.second[i]);
                k--;
            }
        }
        
        return ans;
    }
};