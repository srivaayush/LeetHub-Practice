class Solution {
public:
    unordered_map<string,int>m; 
    vector<vector<double>>graph;
    int setid = 0;
    
    int getid(string &s){
        if(m.find(s)==m.end()){
            m[s] = setid;
            setid++;
            return setid-1;
        }
        else{
            return m[s];
        }
    }
    double ans;
   
    int tar;
    
    
    void dfs(int curr,double prev, vector<bool>&visited){
        
        if(curr==tar){
            ans=prev;
            return;
        }
        visited[curr] = true;
        for(int i = 0;i<graph[curr].size();i++){
            if(graph[curr][i]!=0 && visited[i]==false)
            {
                double nxt = (double)prev*graph[curr][i];
                dfs(i,nxt,visited);
            }
        }
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        graph.resize(50,vector<double>(50,0));
        
        for(int i = 0;i<equations.size();i++){
            string first = equations[i][0];
            string second = equations[i][1];
            double val = (double)values[i];
            int fid = getid(first);
            int sid = getid(second);
            graph[fid][sid] = (double)val;
            graph[sid][fid] = (double)1/(double)val;
        }
        vector<double>res;
        for(auto &i : queries){
            if(m.find(i[0])==m.end()||m.find(i[1])==m.end()){
                res.push_back((double)-1.0);
                continue;
            }
            int source = getid(i[0]);
            tar = getid(i[1]);
            if(source==tar){
                res.push_back((double)1.0);
                continue;
            }

            ans = (double)-1.0;
            vector<bool>visited(50,false);
            dfs(source,1.0,visited);
            res.push_back(ans);
        }
        return res;
    }
};