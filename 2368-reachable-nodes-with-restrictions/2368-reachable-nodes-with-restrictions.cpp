class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& res) {
        set<int> s(res.begin(), res.end());
        
        vector<int> adj[n];
        vector<int> vis(n, false);
        for(auto &x: edges) {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        
        queue<int> q;
        q.push(0);
        vis[0]=true;
        int ans = 1;
        
        while(!q.empty()){
            int u = q.front(); q.pop();
            
            
            for(auto v: adj[u]) {
                if(vis[v] == false && s.count(v) == 0) {
                    vis[v] = true;
                    q.push(v);
                    ans++;
                }
            }
        }
        return ans;
    }
};