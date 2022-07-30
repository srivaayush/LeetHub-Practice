class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        priority_queue<int> pq;
        for(auto &x:m){
            for(auto &y:x){
                if(pq.size()<k){
                    pq.push(y);
                }
                else{
                    if(pq.top()>y){
                        pq.pop();
                        pq.push(y);
                    }
                }
            }
        }
        return pq.top();
    }
};