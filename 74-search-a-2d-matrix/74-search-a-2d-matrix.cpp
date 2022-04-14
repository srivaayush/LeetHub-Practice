/*
Absolute Brute Force
TC ->> O(N*N)
SC ->> O(1)
*/
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& m, int target) {
//         int r=m.size();
//         int c=m[0].size();
//         for(int i=0;i<r;i++){            
//             for(int j=0;j<c;j++){
//                 if(m[i][j]==target)
//                 {
//                     return true;
//                 }                
//             }
//         }
//          return false;
//     }
// };


/*
Optimized Brute Force
TC ->> O(N+N)
SC ->> O(1)
*/

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& m, int target) {
//         int r=m.size();
//         int c=m[0].size();
//         for(int i=0;i<r;i++){
//            if(m[i][c-1]<target)
//                continue;
//             for(int j=c-1;j>=0;j--){
//                 if(m[i][j]==target)
//                 {
//                     return true;
//                 }        
//             }
//             return false;
//         }
//          return false;
//     }
// };

/*
Better Approach
TC ->> O(N*logN)
SC ->> O(1)
*/

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n=matrix.size();
//         int m=matrix[0].size();      
//         for(int i=0;i<n;i++)
//         {
//             if(matrix[i][m-1]<target)
//                 continue;
//             int l = 0, r = m;
//             while(l<r){
//                 int md=(l+r)/2;
//                 if(matrix[i][md]==target)return true;
//                 if(matrix[i][md]<target)l++;
//                 else r--;
//             }
//         }        
//         return false;
//     }
// };

/*
Optimized Approach
TC ->> O(N)
SC ->> O(1)
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();  
        int i=0,j=m-1;
        while(i>=0 && i<n && j>=0 && j<m){
            if(matrix[i][j]==target)
                return true;            
            else{
                if(matrix[i][j]>target)
                    j--;                
                else
                    i++;                
            }
        }      
        return false;
    }
};






