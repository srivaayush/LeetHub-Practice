// class Solution
// {
//     public:
//         bool isBipartite(vector<vector < int>> &graph)
//         {
//             int n = graph.size();
//             vector<int> vis(n, 0);
//                 queue<int> q;
//             for (int i = 0; i < n; i++)
//             {
//                 if (vis[i]) continue;
//                 vis[i]=1;
//                 q.push(i);
//                 while (!q.empty())
//                 {
//                     int qf = q.front();
//                     for (auto &x: graph[qf])
//                     {
//                         if (vis[x] == 0)
//                         {
//                             vis[x] = -vis[qf];
//                             q.push(x);
//                         }
//                         else if (vis[x] == vis[qf])
//                         {
//                             return false;
//                         }
//                     }
//                     q.pop();
//                 }
//             }

//             return true;
//         }
// };

class Solution
{
    public:
        bool checkDFS(int node, vector<int> &col, vector<vector< int>> &graph)
        {
            if (col[node] == 0)
                col[node] = 1;
            for (auto &x: graph[node])
            {
                if (col[x] == 0)
                {
                    col[x] = -col[node];
                    if (!checkDFS(x, col, graph))
                        return false;
                }
                else if (col[x] == col[node]) return false;
            }
            return true;
        }
    bool isBipartite(vector<vector < int>> &graph)
    {
        int n = graph.size();
        vector<int> col(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (col[i] == 0)
            {
                if (!checkDFS(i, col, graph))
                    return false;
            }
        }
        return true;
    }
};