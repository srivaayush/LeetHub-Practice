class Solution {
private:
    vector<vector<pair<int,int>>> adjList;
    void makeGraph(vector<vector<int>>& times,int n){
        adjList.resize(n+1);
        for(auto& time:times){
            int start = time[0];
            int end = time[1];
            int weight = time[2];
            adjList[start].push_back({end,weight});
        }
    }
    
    int Dijkstra(int k){
        vector<int> distance(adjList.size(),INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        distance[k] = 0;
        pq.push({k,0});
        while(!pq.empty()){
            pair<int,int> curr = pq.top();pq.pop();
            int node = curr.first;
            int currDist = curr.second;
            for(auto& nbr:adjList[node]){
                int nbrNode = nbr.first;
                int nbrDist = currDist + nbr.second;
                if(distance[nbrNode] > nbrDist){
                    distance[nbrNode] = nbrDist;
                    pq.push({nbrNode,nbrDist});
                }
            }
            
        }
        int ans = INT_MIN;
        for(int i = 1;i<distance.size(); i++){
            ans = max(ans,distance[i]);
        }
        return ans == INT_MAX ? -1 : ans;
    }
    
    void printGraph(){
        int i = 0;
        for(auto& vec:adjList){
            cout<<i++<<": "<<endl;
            for(auto& pr:vec){
                cout<<pr.first<<" "<<pr.second<<endl;
            }
        }
    }
public:
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        makeGraph(times,n);
        return Dijkstra(k);
    }
};