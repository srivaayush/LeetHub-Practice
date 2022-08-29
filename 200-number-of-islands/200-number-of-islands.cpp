class Solution {
public:
    void DFS (vector<vector<char>>& grid, int i, int j, vector<vector<int>>& d) {
        grid[i][j] = '0';

        for (int k = 0; k < 4; ++k) {
            int x = i + d[k][0];
            int y = j + d[k][1];
            if (x > -1 && x < grid.size() && y > -1 && y < grid[0].size() && grid[x][y] == '1')
                DFS(grid,x,y,d);
        }     
    }

    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        vector<vector<int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
        
        int m=grid.size();
        int n=grid[0].size();

        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (grid[i][j] == '1') {
                    ans++;
                    DFS(grid,i,j,d);
                }

        return ans;
    }
};