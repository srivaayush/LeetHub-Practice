class Solution {
    typedef long long ll;
// private:
//     void print(priority_queue<ll> pq){
//         while(!pq.empty()){
//             cout<<pq.top()<<" ";
//             pq.pop();
//         }
//         cout<<"\n";
//     }
// public:
//     long long numberOfWeeks(vector<int>& milestones) {
//         ll ans=0;int n=milestones.size();
//         // sort(milestones.begin(),milestones.end(),greater<int>());
//         priority_queue<ll> pq;
//         for(auto &x:milestones){
//             pq.push(x);            
//         }
//         while(pq.size()>1){
//             ll a=pq.top();
//             pq.pop();
//             ll b=pq.top();
//             pq.pop();
//             // cout<<a<<" "<<b<<" ";
//             int mn=min(a,b);
//             ans+=2*mn;
//             a=a-mn;
//             b=b-mn;
//             if(a>0)pq.push(a);
//             if(b>0)pq.push(b);
//             // cout<<a<<" "<<b<<"\n";
//             // print(pq);
//             // cout<<"\n";
//         }
//         if(!pq.empty())ans+=pq.top();
//         return ans;
//     }
public:
    long long numberOfWeeks(vector<int>& milestones) {
        sort(milestones.begin(),milestones.end());
        ll sum=accumulate(milestones.begin(),milestones.end(),0ll);
        int n=milestones.size();
        if(sum<2*milestones[n-1]){
            ll ans=2 * (sum - milestones[n-1] + 1);
            return ans-1;
        }
        return sum;           
    }
};