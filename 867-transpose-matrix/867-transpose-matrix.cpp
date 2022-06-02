class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>> a) {
        int m = a.size(), n = a[0].size();
        vector<vector<int>> b(n, vector<int>(m, 0));
        for (int j = 0; j < n; j++)
            for (int i = 0; i < m; i++)
                b[j][i] = a[i][j];
        return b;
    }
};