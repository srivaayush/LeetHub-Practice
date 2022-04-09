class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>um1;
        map<int,vector<char>, greater<int>>um2;
        for(auto &x:s)um1[x]++;
        
        for(auto &x:um1){
            um2[x.second].push_back(x.first);
        }
        string ans="";
        for(auto &x:um2){
            for(auto &y:x.second)
                for(int i=0;i<x.first;i++)
                    ans.push_back(y);
        }
        return ans;
    }
};