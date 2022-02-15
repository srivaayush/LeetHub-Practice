class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(),beans.end());
        long long n=0;
        n=beans.size();
        vector<long long> preSum(n,0);
        preSum[0]=beans[0];
        for(int i=1;i<n;i++)
            preSum[i]=preSum[i-1]+beans[i];
        
        // 1,4,5,6
        // 1,5,10,16
        // int ans=
        long long ans=LLONG_MAX;
        for(int i=0;i<n;i++){
            // ans=min(ans,(long long)beans[i]);
            ans=min(ans, (long long)(preSum[n-1] -(beans[i]*(n-i))));
        }
        return ans;
    }
};