class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& ent) {
        int m = maze.size(), n = maze[0].size(), steps = 0, d[5] = {0, -1, 0, 1, 0};    
        queue<pair<int, int>>q;
        q.push({ent[0], ent[1]});
        maze[ent[0]][ent[1]] = '#';
        while(!q.empty()) {
            int sz = q.size();
            while(sz--) {
                auto [i, j] = q.front(); q.pop();
                for(int k = 0; k < 4; k++) {
                    int ni = i + d[k], nj = j + d[k + 1];
                    if(ni >= 0 and ni < m and nj >= 0 and nj < n and maze[ni][nj] == '.') {
                        if(ni == 0 or ni == m - 1 or nj == 0 or nj == n - 1) 
                            return steps + 1;
                        q.push({ni, nj});
                        maze[ni][nj] = '#';
                    }
                } 
            }
            steps++;
        }
        return -1;
    }
};