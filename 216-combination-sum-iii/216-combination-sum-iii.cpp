class Solution
{
    private:
    void helper(int k, int n, int sum, vector<vector < int>> &v, vector< int > &ans, int x)
    {
        if (ans.size() == k && sum == n)
        {
            v.push_back(ans);
            return;
        }

        if (x >= 10) return;
        ans.push_back(x);
        helper(k, n, sum + x, v, ans, x + 1);
        ans.pop_back();
        helper(k, n, sum, v, ans, x + 1);
    }
    public:
    vector<vector < int>> combinationSum3(int k, int n)
    {
        vector<vector < int>> v;
        vector<int> ans;
        int sum = 0;
        helper(k, n, sum, v, ans, 1);
        return v;
    }
};