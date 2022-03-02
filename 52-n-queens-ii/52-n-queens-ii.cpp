//Brute Force Solution
// class Solution {
// private:
//     // This will take O(3*N) time
//     bool isSafe(int row,int col,vector<string> &board,int n){
//         //make copies of row and column
//         int duprow=row;
//         int dupcol=col;        
//         //upward diagonal check
//         while(row>=0 &&col>=0 ){
//             if(board[row][col]=='Q')return false;
//             row--;col--;
//         }
//         col=dupcol;
//         row=duprow;
//         //check in every single row
//         while(col>=0){
//             if(board[row][col]=='Q')return false;
//             col--;            
//         }
//         col=dupcol;
//         row=duprow;
//         //downward diagonal check
//         while(row<n && col>=0){
//             if(board[row][col]=='Q')return false;
//             row++;
//             col--;            
//         }
//         //safe to place
//         return true;
//     }
// private:
//     void solve(int col,vector<string> &board,int &ans,int n){
//         if(col==n){
//             ans++;
//             return;
//         }
//         for(int row=0;row<n;row++){
//             if(isSafe(row,col,board,n)){
//                 board[row][col]='Q';
//                 solve(col+1,board,ans,n);
//                 board[row][col]='.'; 
//             }                           
//         }        
//     }
// public:
//     int totalNQueens(int n) {
//         int ans=0;
//         vector<string> board(n);
//         string s(n,'.');
//         for(int i=0;i<n;i++)
//             board[i]=s;        
//         solve(0,board,ans,n);
//         return ans;
//     }    
// };


// Optimized Solution
class Solution {
private:
    void solve(int col,     vector<string> &board,     int &ans,  vector<int> &leftRow,    vector<int> &upperDiagonal,   vector<int> &lowerDiagonal,   int n){
        
        if(col==n){
            ans++;
            return;
        }
        for(int row=0;row<n;row++){
            //Safety Check
            if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0){
                board[row][col]='Q';
                leftRow[row]=1;
                lowerDiagonal[row+col]=1;
                upperDiagonal[n-1+col-row]=1;
                
                solve(col+1,   board,  ans,   leftRow,   upperDiagonal,  lowerDiagonal,  n);
                
                //unmarking the hashes
                board[row][col]='.';
                leftRow[row]=0;
                lowerDiagonal[row+col]=0;
                upperDiagonal[n-1+col-row]=0;
            }
                
            
        }
        
    }
public:
    int totalNQueens(int n) {
        int ans=0;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;        
        
        vector<int> leftRow(n,0);
        //for upper diagonal sum of ((n-1)+ (col-row)) is always equal
        vector<int> upperDiagonal(2*n-1,0);
        //for lower diagonal sum of (row+col) is always equal
        vector<int> lowerDiagonal(2*n-1,0);
        
        solve(0,  board,  ans,  leftRow,  upperDiagonal,  lowerDiagonal,  n);
        return ans;
    }    
};