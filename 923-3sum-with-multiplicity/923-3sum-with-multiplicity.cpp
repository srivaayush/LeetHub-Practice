class Solution {
    typedef long long ll;
    const ll MOD = 1e9+7;
private:
    ll mod(ll x) { 
        return (x % MOD); 
    }
    ll mod_add(ll a, ll b) { 
        return mod(mod(a) + mod(b)); 
    }
public:
    int threeSumMulti(vector<int>& A, int target) {
        sort(A.begin(),A.end());
        
        ll ans=0;ll n=A.size();
        for(int i=0;i<n;i++){
            int T = target - A[i];
            int j = i+1, k = A.size() - 1;

            while (j < k) {
                if (A[j] + A[k] < T)
                    j++;
                else if (A[j] + A[k] > T)
                    k--;
                else if (A[j] != A[k]) {  
                    int left = 1, right = 1;
                    while (j+1 < k && A[j] == A[j+1]) {
                        left++;
                        j++;
                    }
                    while (k-1 > j && A[k] == A[k-1]) {
                        right++;
                        k--;
                    }

                    ans += left * right;
                    ans %= MOD;
                    j++;
                    k--;
                } else {
                    ans += (k-j+1) * (k-j) / 2;
                    ans %= MOD;
                    break;
                }
            }
        }

        return mod(ans);
    }
};
