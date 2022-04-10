class Solution {
    typedef long long ll;
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<ll, vector<ll>, greater<ll> >pq;
        for(auto &x:nums)pq.push(x);
        
        while(k--){
            ll t=pq.top();
            pq.pop();
            pq.push(t+1);            
        }
        ll ans=1;
        ll mod=1e9+7;
        while(!pq.empty()){
            ll t=pq.top();
            pq.pop();
            ans=(t%mod )* (ans%mod);
            ans=ans%mod;
        }
        return ans%mod;
    }
};