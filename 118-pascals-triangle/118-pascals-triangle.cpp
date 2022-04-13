/* 
SC->> O(N*N)
TC ->> O(N*N)
*/

/* 
If you're asked to find out the number at r-th row and c-th column,
you can use (r-1)C(c-1) to find it
*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        // define a vector of vector with size of n vectors
        vector<vector<int>> ans(numRows);
        
        for(int i=0;i<numRows;i++){            
            //each will be of size (i+1)
            ans[i].resize(i+1); 
            ans[i][0]=1;
            ans[i][i]=1;
            
            for(int j=1;j<i;j++){
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];                
            }           
        }
        return ans;        
    }
};