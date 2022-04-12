class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>ans=board;
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                vector<int> cnt(2,0);
                for(int k=i-1;k<=i+1;k++){
                    if(k==-1 || k==m )
                        continue;
                    for(int l=j-1;l<=j+1;l++){
                        if(l==-1 || l==n || (k==i && (l==j)))
                            continue;
                        cnt[board[k][l]]++;
                    }
                }
                // cout<<endl;
                
                if(board[i][j] ==1){
                    if(cnt[1]<2  || cnt[1]>3)ans[i][j]=0;                        
                }
                else{
                    if(cnt[1]==3)ans[i][j]=1;
                }
            }
        }
        board=ans;
    }
};