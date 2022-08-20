class Solution {
public:
    int minRefuelStops(int target, int s, vector<vector<int>>& stations) {
        int n=stations.size();
        int p=s, i=0; 
        int ans=0;
        priority_queue<int> pq;
        while(p < target){
            while(i<n && p >= stations[i][0]){
                pq.push(stations[i][1]);
                i++;
            }
            if(pq.empty()) return -1;
            p += pq.top();
            pq.pop();

            ans++;
        }
        return ans;
    }
};