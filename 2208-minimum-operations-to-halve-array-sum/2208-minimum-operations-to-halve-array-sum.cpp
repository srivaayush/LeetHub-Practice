class Solution {
    typedef long long ll;
public:
    int halveArray(vector<int>& nums) {
        double sum=0,req=0,ans=0,reqs;
        priority_queue<double> pq;
        for(auto &x:nums){
            sum+=(x*1.0);
            pq.push((x*1.0));
        }
        reqs=sum/2;
        // cout<<reqs<<endl;
        while(req<reqs){
            double tp=pq.top();
            req+=(tp*1.0/2);
            // cout<<req<<endl;
            pq.pop();
            pq.push(tp/2);
            ans++;
            
        }
        return ans;
    }
};