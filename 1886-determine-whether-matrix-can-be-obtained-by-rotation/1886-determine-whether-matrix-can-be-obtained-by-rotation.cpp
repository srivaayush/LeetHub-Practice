class Solution {
private:
    void rotateBy90(vector<vector<int>>& mat,int &n){
        reverse(mat.begin(),mat.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
                swap(mat[i][j],mat[j][i]);
        }
    }
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        for(int i=0;i<4;i++){
            if(mat==target)return true;
            rotateBy90(mat,n);
        }
        return false;            
    }
};