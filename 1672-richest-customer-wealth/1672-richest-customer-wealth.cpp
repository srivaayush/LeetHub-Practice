class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int n=acc.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int s=accumulate(acc[i].begin(),acc[i].end(),0);
            maxi=max(maxi,s);
        }
        return maxi;
    }
};