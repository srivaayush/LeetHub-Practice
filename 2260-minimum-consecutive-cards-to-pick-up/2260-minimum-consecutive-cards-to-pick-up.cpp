class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int,vector<int>> mp;int c=0;
        for(auto &x:cards){
            mp[x].push_back(c);
            c++;              
        }
        int mini=INT_MAX;
        for(auto &x:mp){
            for(int i=0;i<x.second.size()-1;i++){
                if(x.second[i+1]-x.second[i] < mini){
                    mini=x.second[i+1]-x.second[i];
                }
            }
        }
        if(mini==INT_MAX){
            return -1;
        }
        return mini+1;
    }
};