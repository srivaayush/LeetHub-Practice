/* Brute Force 
Space : O(M*N)
Time : O(M*N *(M+N)))
*/

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& mat) {
//         int m=mat.size();
//         int n=mat[0].size();
//         vector<vector<int>> ans(m , vector<int> (n, INT_MIN));        
//         for(int i = 0; i < m; i++)
//         {
//             for(int j = 0; j < n; j++)
//             {
//                 if(mat[i][j]==0){
//                     for(int k=0;k<n;k++)
//                         ans[i][k]=0;
//                     for(int k=0;k<m;k++)
//                         ans[k][j]=0;
//                 }
//             }            
//         }        
//         for(int i = 0; i < m; i++)
//         {
//             for(int j = 0; j < n; j++)
//             {
//                 if(ans[i][j]!=0){
//                     ans[i][j]=mat[i][j];
//                 }
//             }            
//         }
//         mat=ans;
//     }
// };

/* Brute Force without extra space
Space : O(1)
Time : O(M*N *(M+N)))

This won't work for all cases as the values in matrix ranges from -2^31 to 2^31 - 1
*/
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& a) {
//         int m=a.size();
//         int n=a[0].size();
//         int temp_change=INT_MIN;
        
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(a[i][j]==0){
//                     for(int k=0;k<n;k++){
//                         if(a[i][k]!=0)
//                             a[i][k]=temp_change;                        
//                     }
//                     for(int k=0;k<m;k++){
//                         if(a[k][j]!=0)
//                             a[k][j]=temp_change;                        
//                     }
                    
//                 }
//             }
//         }        
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(a[i][j]==temp_change)a[i][j]=0;
//             }
//         }        
//     }
// };

/* Brute Force with M+N extra space
Space : O(M+N)
Time : O(M*N)

This won't work for all cases as the values in matrix ranges from -2^31 to 2^31 - 1
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        vector<int> change_row(m,1);
        vector<int> change_column(n,1);
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==0){
                    change_row[i]=0;
                    change_column[j]=0;                    
                }
            }
        }  
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(change_row[i]==0 || change_column[j]==0)
                    a[i][j]=0;
            }
        } 
        
        
        
    }
};




























