class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>> ans;
        int n=a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && (a[i]==a[i-1]))
                   continue;
            int l=i+1,r=n-1,target=0;
            while(l<r){
                if((a[i]+a[l]+a[r])==0){
                    ans.push_back({a[i],a[l],a[r]});
                    while(l+1<r && a[l]==a[l+1])l++;
                    while(l<r-1 && a[r]==a[r-1]) r--;
                    l++; r--;
                }
                else if((a[i]+a[l]+a[r])<0){
                    l++;
                }
                else if((a[i]+a[l]+a[r])>0){
                    r--;;
                }
                
            }            
        }
        return ans;
    }
};