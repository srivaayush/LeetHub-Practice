class Solution {
public:
    int n,m;
    bool isValid(int i, int j)
    {
        if(i<0 || j<0 || i>=n || j>=m) return false;
        return true;
    }
    int maxi(int a, int b, int c, int d)
    {
        return max(a,max(b,max(c,d)));
    }
    int solve(int i, int j, vector<vector<int>>& dp, vector<vector<int>>& a)
    {
        if(!isValid(i,j)) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int left = 0, right = 0, up = 0, down = 0;
        if(i>0 and a[i-1][j]>a[i][j]) up = solve(i-1,j,dp,a);
        if(j>0 and a[i][j-1]>a[i][j]) left = solve(i,j-1,dp,a);
        if(i+1<n and a[i+1][j]>a[i][j]) down = solve(i+1,j,dp,a);
        if(j+1<m and a[i][j+1]>a[i][j]) right = solve(i,j+1,dp,a);
        return dp[i][j] = 1 + maxi(up,down,left,right);
    }
    int longestIncreasingPath(vector<vector<int>>& a) {
        int n_ = a.size(), m_ = a[0].size();
        n = n_;
        m = m_;
        vector<vector<int>> dp(n, vector<int> (m, -1));
        int res = 1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                res = max(res, solve(i,j,dp,a));
            }
        }
        return res;
    }
};