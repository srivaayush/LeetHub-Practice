class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        priority_queue<int, vector<int>, greater<int>>pq;
        // priority_queue<int> pq;
        for(auto &x:a){
            if(pq.size()<k)
                pq.push(x);
            else{
                if(pq.top()<x)
                {
                    pq.pop();
                    pq.push(x);
                }
            }
        }
        return pq.top();
    }
};