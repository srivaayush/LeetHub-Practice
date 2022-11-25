class Solution {
    typedef long long ll;
public:
    int sumSubarrayMins(vector<int>& a) {
        stack<ll> st;
        ll ans=0;ll mod=(1e9+7);
        ll n=a.size();
        for(int i=0;i<=n;i++){            
            while(st.empty()==false && (i==n||a[st.top()]>a[i]))
            {
                ll j=st.top();
                st.pop();
                ll r=i-j;
                int preTop=-1;
                if(st.empty()==false)preTop=st.top();
                ll l=j-preTop;
                ans+=(a[j]*l*r);
                ans%=mod;              
            }
            st.push(i);           
        }
        return ans;
        
    }
};