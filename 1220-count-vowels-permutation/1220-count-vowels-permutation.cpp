class Solution {
private:
    const int mod = 1e9 + 7;
    int dp[26][100000];
    unordered_map<char,vector<char>> mp;
    int solve(char prev,int n){
        if(!n) return 1;
        if(dp[prev-'a'][n] != -1) return dp[prev-'a'][n];
        
        int ans = 0;
        for(auto &ch : mp[prev]) 
            ans = (ans + solve(ch,n-1)) % mod;
        
        return dp[prev-'a'][n] = ans;
    }
public:
    int countVowelPermutation(int n) {
        mp.insert({'a',{'e'}});
        mp.insert({'e',{'a','i'}});
        mp.insert({'i',{'a','e','o','u'}});
        mp.insert({'o',{'i','u'}});
        mp.insert({'u',{'a'}});
        
        int ans = 0;
        vector<char> v = {'a','e','i','o','u'};
        
        memset(dp,-1,sizeof dp);
        
        for(auto &ch : v)
            ans = (ans + solve(ch,n-1)) % mod;
        
        return ans;
    }
};