class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r1=0,r2=n-1;
        int c1=0,c2=n-1;
        int val=0;
        vector<vector<int>> A(n,vector<int>(n));
        while(r1<=r2 && c1<=c2){
            for(int c=c1;c<=c2;c++)A[r1][c]=++val;
            
            for(int r=r1+1;r<=r2;r++)A[r][c2]=++val;
            
            if(r1<r2 && c1<c2){
                for(int c=c2-1;c>=c1;c--)A[r2][c]=++val;
            
                for(int r=r2-1;r>r1;r--)A[r][c1]=++val;
            }
            r1++;c1++;c2--;r2--;
        }
        return A;
    }
};