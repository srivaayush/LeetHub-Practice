class Solution {
private:
    bool similar(string &f, string &s) {
        int dif = 0;
        for (int i=0; i<s.length(); i++) {
            if (s[i]==f[i]) continue;
            dif++;
        }
        return dif==0 || dif==2;
    }

    void dfs(int s, vector<int> adj[], vector<bool> &vis) {
        if (vis[s]) return;
        vis[s]=true;
        for (auto ch: adj[s]) {
            dfs(ch, adj, vis);
        }
    }
public:
    int numSimilarGroups(vector<string>& strs) {
        int n = strs.size();
        vector<int> adj[n];
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                if (similar(strs[i], strs[j])) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int cnt = 0;
        vector<bool> vis(n+1, false);
        for (int i=0; i<n; i++) {
            if (!vis[i]) {
                dfs(i, adj, vis);
                cnt++;
            }
        }
        return cnt;
    }
};