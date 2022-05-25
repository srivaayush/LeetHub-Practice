class Solution
{
    public:
        bool isBipartite(vector<vector < int>> &graph)
        {
            int n = graph.size();
            vector<int> vis(n, 0);
                queue<int> q;
            for (int i = 0; i < n; i++)
            {
                if (vis[i]) continue;
                vis[i]=1;
                q.push(i);
                while (!q.empty())
                {
                    int qf = q.front();
                    for (auto &x: graph[qf])
                    {
                        if (vis[x] == 0)
                        {
                            vis[x] = -vis[qf];
                            q.push(x);
                        }
                        else if (vis[x] == vis[qf])
                        {
                            return false;
                        }
                    }
                    q.pop();
                }
            }

            return true;
        }
};