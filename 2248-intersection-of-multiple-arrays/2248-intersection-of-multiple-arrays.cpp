class Solution {
public:
    vector<int> intersection(vector<vector<int>>& a) {
        map<int,int> mp;
        for(auto &x:a){
            for(auto &y:x)
                mp[y]++;
        }
        int n=a.size();
        vector<int> ans;
        for(auto &x:mp){
            if(x.second==n)ans.push_back(x.first);
        }
        return ans;
    }
};