class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        set<pair<int,int>>s;
        int i=0;
            
        for(auto &x:mat){
            int cnt=0;
            for(auto &y:x)
                if(y==1)cnt++;
                else break;
            
            s.insert(make_pair(cnt,i));
            i++;
        }
        // int k=mat.size();
        for(auto &x:s){
            ans.push_back(x.second);k--;
            if(k==0)return ans;
        }
        return ans;
    }
};