class Solution {
public:
    int partitionArray(vector<int>& a, int k) {
        int ans=0;
        sort(a.begin(),a.end());
        int n=a.size();
        for(int i=0;i<n;){
            int j=i;            
            while(j<n && (a[j]-a[i]<=k)){
                j++;
            }
            i=j;ans++;
        }
        return ans;
    }
};