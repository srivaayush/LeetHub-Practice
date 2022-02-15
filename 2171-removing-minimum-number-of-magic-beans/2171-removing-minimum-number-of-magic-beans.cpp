class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(),beans.end());
        long long n=beans.size();
        long long sum=0;
        for(int i=0;i<n;i++)
            sum+=beans[i];
        long long ans=LLONG_MAX;
        for(int i=0;i<n;i++)
            ans=min(ans, (long long)(sum-(beans[i]*(n-i))));        
        return ans;
    }
};