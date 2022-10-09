class Solution {
public:
    vector<int> findArray(vector<int>& p) {
        int n=p.size();
        vector<int> ans(n,0);
        ans[0]=p[0];
        for(int i=0;i<n-1;i++){
            ans[i+1]=p[i]^p[i+1];
        }
        return ans;
    }
};