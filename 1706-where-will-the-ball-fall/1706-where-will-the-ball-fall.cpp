class Solution {
public:
    vector<int> findBall(vector<vector<int>>& a) {
        vector<int> ans;
        int n=a.size(),m=a[0].size();
        for(int i=0;i<m;i++){
            int k=i;
            for(int j=0;j<n;j++){
                // cout<<k<<"  ";
                if( (k<0 || k>m) || (k==0 && a[j][k]==-1)  || (k==m-1 && a[j][k]==1) || (a[j][k]==1 && a[j][k+1]==-1) || (a[j][k]==-1 && a[j][k-1]==1)){
                    k=-1;
                    break;
                }
                
                if(a[j][k]==1)
                    k++;
                else 
                    k--;
            }
            // cout<<"\n";
            ans.push_back(k);
        }
        return ans;
    }
};