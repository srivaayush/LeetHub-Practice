class Solution {
public:
    typedef long long ll;
    ll maxAlternatingSum(vector<int>& nums) {
        ll ans = 0, odd = 0, even = 0;
        int n=nums.size();
        for (int i = 0; i < n; i++){
            even = max(odd+nums[i], even);
            odd = max(even-nums[i], odd);   
            ans = max(even, max(odd,ans));
        }
        return ans; 
    }
};