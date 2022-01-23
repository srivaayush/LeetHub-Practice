class Solution {
public:
    vector<int> findLonely(vector<int>& a) {
        map<int,int> m;
        for(auto &x:a){
            m[x]++;
        }
        set<int> s;
        vector<int> ans;
        for(auto &x:a){
            if( m[x+1]==0 && m[x-1]==0 && m[x]==1){
                    ans.push_back(x);                
            }
        }
        return ans;
        
    }
};