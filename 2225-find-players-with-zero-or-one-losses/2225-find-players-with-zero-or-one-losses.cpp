class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& m) {
        map<int,int> mpl;
        map<int,int> mpw;
        vector<vector<int>> ans;
        for(auto &x:m){
            mpl[x[1]]++;
            mpw[x[0]]++;
        }
        vector<int> w0;
        for(auto &x:mpw){
            if(mpl.find(x.first)==mpl.end()){
                w0.push_back(x.first);
            }
        }
        vector<int> l0;
        for(auto &x:mpl){
            if(x.second==1)
                l0.push_back(x.first);
        }
        ans.push_back(w0);
        ans.push_back(l0);
        return ans;
        
    }
};