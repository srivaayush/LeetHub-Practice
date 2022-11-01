class Solution {
public:
    int hmm(vector<vector<int>>& grid, int i, int j){
        if(i == grid.size())
            return j;
        else
            if(grid[i][j] == 1){
                if(j != grid[0].size() - 1)
                    if(grid[i][j + 1] == 1)
                        return hmm(grid, i + 1, j + 1);
            }else
                if(j != 0)
                    if(grid[i][j -1] == -1)
                        return hmm(grid, i + 1, j - 1);
        return -1;
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), i;
        vector<int> v;
        for(i = 0; i < m; i++)
            v.push_back(hmm(grid, 0, i));
        return v;
    }
};