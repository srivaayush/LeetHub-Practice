class Solution {
    typedef long long ll;
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        vector<ll> pre(n,0);
        
        // pre[0]=nums[0];
        ll sm=0;
        for(auto &x:nums)
            sm+=x;
        vector<long long> post(n,sm);
        ll tem=0;
        for(int i=0;i<n;i++){
            tem+=nums[i];
            pre[i]=tem;
        }
        long long t=0;
        for(int i=0;i<n;i++){
            t+=nums[i];
            post[i]=post[i]-t;
        }
        long long mini=LLONG_MAX,ind=-1;
        for(int i=0;i<n;i++){
            ll k1=(ll)(((pre[i]*1.0)/(i+1)));
            ll k2=0;
            if(n-i!=1){
                k2=(ll)(((post[i]*1.0)/(n-i-1)));
            }
        
            
            ll k3=abs(k1-k2);
            if(k3<mini){
                mini=k3;
                ind=i;
            }
        }
        return ind;
    }
};