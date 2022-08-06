class Solution {
    typedef long long ll;
public:
    long long taskSchedulerII(vector<int>& a, int sp) {
        long long ans=0;
        map<ll,ll> mp;
        // int wa=0;
        for(auto &x:a){
            if(mp.find((ll)(x))==mp.end() || (mp[x]+sp)<=(ans)){
                ans++;
                mp[(ll)x]=ans;
            }
            else{
                mp[x]=mp[x]+sp+1;
                ans=mp[x];
            }
            // cout<<wa<<"  "<<mp[x]<<endl;
            // wa++;
        }
        return ans;
    }
};