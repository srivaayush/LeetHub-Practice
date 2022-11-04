class Solution {
public:
    typedef long long int ll;
    vector<bool> canEat(vector<int>& cc, vector<vector<int>>& q) {
        vector<ll> pre(cc.size()+1);
        pre[0]=0;
        pre[1]=cc[0];
        for(int i=1;i<=cc.size();i++){
            pre[i]=pre[i-1]+(ll)cc[i-1];
        }
        
        
        vector<bool> ans;
        for(auto &x: q){
            x[1]++;
            long long int mx= (ll)x[1] * (ll)x[2];
            ll mn= (ll)x[1];
            if(mx>pre[x[0]]  &&  mn<=pre[x[0]+1]) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};