class Solution {
    typedef long long ll;
private:
    ll count(string &a, string &b)
    {
        ll m = a.size();
        ll n = b.size();
        vector<vector<ll>> lookup(m+1,vector<ll>(n+1,0));

        for (ll i = 0; i <= n; i++)
            lookup[0][i] = 0;

        for (ll i = 0; i <= m; i++)
            lookup[i][0] = 1;
        for (ll i = 1; i <= m; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                if (a[i - 1] == b[j - 1])
                    lookup[i][j] = lookup[i - 1][j - 1] +
                                   lookup[i - 1][j];

                else
                    lookup[i][j] = lookup[i - 1][j];
            }
        }

        return lookup[m][n];
    }
public:
    long long numberOfWays(string s) {
        
        int n=s.size();
        
        vector<ll> post0(n,0),post1(n,0);
        vector<ll> pre0(n,0),pre1(n,0);
        // string s1="010",s2="101";
        
        // ll c1= count(s,s1);
        // ll c2=count(s,s2);
        
        if(s[0]=='0')
            pre0[0]=1;
        else
            pre1[0]=1;
        for(int i=1;i<n;i++){
            pre0[i]=pre0[i-1]+(s[i]=='0');
            pre1[i]=pre1[i-1]+(s[i]=='1');
        }
        
        if(s[n-1]=='0')
            post0[n-1]=1;
        else
            post1[n-1]=1;
        
        
        for(int i=n-2;i>=0;i--){
            post0[i]=post0[i+1]+(s[i]=='0');
            post1[i]=post1[i+1]+(s[i]=='1');
        }
        // for(auto &x:pre0)
        //     cout<<x<<" ";
        
        
        ll ans=0;
        for(int i=1;i<n-1;i++){
            if(s[i]=='0')
                ans+=(pre1[i-1]*post1[i+1]);
            else
                ans+=(pre0[i-1] *post0[i+1]);
        }
        return ans;
        
        
        //  vector<vector<ll> > dp(s.size() + 1,vector<ll>(s1.size() + 1, -1));
        //  ll c1= count(s, s1, s.size(), s1.size(), dp);
        // vector<vector<ll> > dp1(s.size() + 1,vector<ll>(s1.size() + 1, -1));
        // ll c2= count(s, s2, s.size(), s2.size(), dp1);
        
        // ll c1=findSubsequenceCount(s, s1);
        // ll c2=findSubsequenceCount(s, s2);
    }
};