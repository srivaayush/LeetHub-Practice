class Solution {
typedef long long ll;
public:
    long long minimumTime(vector<int> &time, int totalTrips) {
        ll ans=1e14;
        ll i=1,j=1e14;ll temp=0;
        while(i<=j){
            ll mid=(i+j)/2;
            temp=0;
            ll n=time.size();
            for(ll k=0;k<n;k++){
                temp+=mid/(ll)time[k];
            }
            if(temp<totalTrips)
                i=mid+1;
            else{
                ans=min(ans,mid);
                j=mid-1;
            }
        }
        return ans;
    }
};