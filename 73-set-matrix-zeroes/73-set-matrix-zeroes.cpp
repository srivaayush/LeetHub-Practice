class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> ans(m , vector<int> (n, INT_MIN));
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(mat[i][j]==0){
                    for(int k=0;k<n;k++)
                        ans[i][k]=0;
                    for(int k=0;k<m;k++)
                        ans[k][j]=0;
                }
            }            
        }
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(ans[i][j]!=0){
                    ans[i][j]=mat[i][j];
                }
            }            
        }
        mat=ans;
        // return ans;
        
        
        
    }
};