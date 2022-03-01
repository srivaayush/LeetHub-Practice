class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        int k=2;int p=0;
        // int prev=0;
        if(n==0)return {0};
        ans[0]=0;
        ans[1]=1;
        for(int i=2;i<=n;i++){
            if(k==i)
            {
                ans[i]=1;
                p=1;
                k*=2;
            }
            else{
                ans[i]=1+ans[p];
                p++;
            }
        }
        return ans;
    }
};