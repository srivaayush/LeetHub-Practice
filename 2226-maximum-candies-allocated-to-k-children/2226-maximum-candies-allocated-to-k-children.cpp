class Solution {
    typedef long long int ll;
public:
    int maximumCandies(vector<int>& cn, long long k) {
        // ll sum=accumulate(cn.begin(),cn.end(),0);
        ll sum=0;
        for(auto &x:cn)sum+=x;
        // if(k>sum)return 0;
        // sort(cn.begin(),cn.end());
        // vector<int>
        ll lo=1,hi=sum;
        ll ans=0;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            // if(mid==0)return 0;
            ll res=0;
            for(auto &x:cn){
                res+=((ll)x/mid);
            }
            if(res>=k){
                if(mid>ans)ans=mid;
                // ans=max(ans,mid);
                lo=mid+1;
            }
            // if(res>k)lo=mid+1;
            if(res<k)hi=mid-1;
            
        }
        return ans;
        
    }
};