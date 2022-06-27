class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& a) {
        int n=a.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j || (i+j+1)==n) {
                    if(a[i][j]==0)return false;
                }
                else {
                    if(a[i][j]!=0)return false;
                }
            }
        }
        return true;
    }
};