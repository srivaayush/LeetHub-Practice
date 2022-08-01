class Solution {
public:
    int helper(int m, int n, int a, int b, vector<vector<int>> &dp)
    {
        if (a < 0 || a > m || b < 0 || b > n) {
            return 0;
        }
        if (dp[a][b] != -1) {
            return dp[a][b];
        }
        if (a == m-1 && b == n-1) {
            dp[a][b] = 1;
        }
        else {
            dp[a][b] = helper(m, n, a+1, b, dp) + helper(m, n, a, b+1, dp);
        } 
        return dp[a][b];
    }
    
    int uniquePaths(int m, int n) 
    {
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        int totalPaths = helper(m, n, 0, 0, dp);
        return totalPaths;
    }
};