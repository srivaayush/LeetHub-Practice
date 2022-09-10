class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<int> ans(k+1, 0), store(k+1, INT_MAX);
        int i, j, n = prices.size();
        for (i = 0; i < n; i++) {
            for (j = 1; j <= k; j++) {
                store[j] = min(store[j], prices[i]-ans[j-1]);
                ans[j] = max(ans[j], prices[i]-store[j]);
            }
        }
        return ans[k];
    }
};