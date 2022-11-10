class Solution {
public:
    vector<int> applyOperations(vector<int>& a) {
        // If nums[i] == nums[i + 1], then multiply nums[i] by 2 and set nums[i + 1] to 0. Otherwise, you skip this operation.
        int n=a.size();
        vector<int> ans(n,0);
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                a[i]*=2;
                a[i+1]=0;
            }
        }
        int j=0;
        for(auto &x:a){
            if(x!=0){
                ans[j++]=x;
            }
        }
        return ans;        
    }
};