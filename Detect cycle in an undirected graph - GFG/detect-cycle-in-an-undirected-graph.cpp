// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// class Solution {
//     private:
//     bool cycleDFS(int node,int parent,vector<int> &vis, vector<int> adj[]){
//         vis[node]=1;
//         for(auto &x:adj[node]){
//             if(vis[x]==0){
//                 if(cycleDFS(x,node,vis,adj))
//                     return true;
//             }
//             else {
//                 if(x!=parent)return true;
//             }
//         }
//         return false;
//     }
//   public:
//     bool isCycle(int v, vector<int> adj[]) {
//         vector<int> vis(v,0);
//         for(int i=0;i<v;i++){
//             if(vis[i]==0){
//                 if(cycleDFS(i,-1,vis,adj))
//                 return true;
//             }
            
//         }
//         return false;
//     }
// };

class Solution {
    private:
    bool cycleBFS(int node,int parent,vector<int> &vis, vector<int> adj[]){
        vis[node]=1;
        //queue of node and parent
        
        queue<pair<int,int>>q;
        q.push(make_pair(node,parent));
        
        while(!q.empty()){
            auto qf=q.front();
            vis[qf.first]=1;
            q.pop();
            for(auto &x: adj[qf.first]){
                if(vis[x]==0){
                    q.push(make_pair(x,qf.first));
                }
                else{
                    if(x!=qf.second)return true;
                }
            }
            // else{
                
            // }
        }
        return false;
    }
  public:
    bool isCycle(int v, vector<int> adj[]) {
        vector<int> vis(v,0);
        for(int i=0;i<v;i++){
            if(vis[i]==0){
                if(cycleBFS(i,-1,vis,adj))
                return true;
            }
            
        }
        return false;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends