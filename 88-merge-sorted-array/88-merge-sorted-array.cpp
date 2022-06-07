class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        vector<int> ans(n+m);
        int i=0,j=0,p=0;
        while(i!=m && j!=n){
            
            if(a[i]<b[j]){
                // cout<<"Yess";
                ans[p]=(a[i]);i++;p++;
            }
            else {
                ans[p]=b[j];
                j++;p++;
            }            
        }
        for(;i<m;i++)
        {
            ans[p]=(a[i]);p++;
        }
        
        for(;j<n;j++)
        {
            ans[p]=b[j];
            p++;
        }
        
        for(i=0;i<m+n;i++)
            // cout<<ans[i];
            a[i]=ans[i];
            // ans.push_back(a[i]);
        
        // return ans;
        
    }
};