class Solution {
    typedef long long ll;
private:
    ll nthPalindrome(ll n, ll k)
    {
        string ans="";
        ll temp = (k & 1) ? (k / 2) : (k/2 - 1);
        ll palindrome = (ll)pow(10, temp);
        palindrome += n - 1;

        ans+=to_string(palindrome);

        if (k & 1)
            palindrome /= 10;
        while (palindrome)
        {
            ans+=to_string(palindrome % 10);
            palindrome /= 10;
        }
        ll res=0;
        if(ans.size()>k)return -1;
        // for(auto &x:ans){
        //     res=(res*10)+(x-'0');
        // }
        
        // cout<<ans<<endl;
        return stoll(ans);
    }
public:
    vector<long long> kthPalindrome(vector<int>& queries, int k) {
        vector<long long>ans;
        for(auto &x:queries){
            ll res=nthPalindrome(x,k);
            ans.push_back(res);
        }
        return ans;
    }
};