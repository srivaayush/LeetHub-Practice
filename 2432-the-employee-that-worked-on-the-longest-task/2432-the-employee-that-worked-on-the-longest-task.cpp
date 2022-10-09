class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int diff=logs[0][1]-0;
        int id=logs[0][0];
        for(int i=1;i<=logs.size()-1;i++){
            int ans=logs[i][1]-logs[i-1][1];
            if(ans==diff){
                id=min(id,logs[i][0]);
            }
            if(ans>diff){
                diff=ans;
                id=logs[i][0];
            }
        }
        return id;
    }
};