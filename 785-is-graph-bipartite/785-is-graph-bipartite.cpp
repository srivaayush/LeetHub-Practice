class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int size = int(graph.size());
        vector<int> colors(size, 0);
         stack<int> stk;
        for(int i = 0; i < size; ++i) {
            if(colors[i] == 0) {
                stk.push(i);
                colors[i] = 1;
                while(!stk.empty()) {
                    auto node = stk.top();
                    stk.pop();
                    for(auto nei : graph[node]) {
                        if(colors[nei] != 0) {
                            if(colors[nei] == colors[node]) {return false;}
                        }else {
                            colors[nei] = -(colors[node]);
                            stk.push(nei);
                        }
                    }
                }
                
            }
        }
        return true;
    }
};