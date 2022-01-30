// class Solution {
// public:
//     vector<int> maxScoreIndices(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> pre(n,0),post(n,0);
//         int maxi=INT_MIN;
        
//         if(nums[0]==0)
//             pre[0]=1;
//         maxi=max(maxi,pre[0]);
//         for(int i=1;i<n;i++){
//             pre[i]=pre[i-1]+(nums[i]==0);
//             maxi=max(maxi,pre[i]);
//         }
        
//         if(nums[n-1]==1)
//             post[n-1]=1;
        
//         maxi=max(maxi,post[n-1]);
//         for(int i=n-2;i>=0;i--){
//             post[i]=post[i+1]+(nums[i]==1);
//             maxi=max(maxi,post[i]+pre[i]);
//         }
//         vector<int> ans;
        
//         for(int i=1;i<n-1;i++)
//         {
//             if((pre[i-1]+post[i+1])==maxi)
//             {
//                 ans.push_back(i);              
//             } 
//         }
//         if(pre[n-1]==maxi)ans.push_back(n);
//         if(post[0]==maxi)ans.push_back(0);
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n=nums.size();
        int r1=0,l0=0;
        for(auto &x:nums)r1+=x;
        int maxi=r1;
        
        vector<int>ans;
        
        for (int i = 0; i <=n; ++i){
            if(l0+r1>maxi){
                maxi=l0+r1;
                ans.clear();
            }
            if(l0+r1 ==maxi)
                ans.push_back(i);
            if(i<n){
                r1=r1-nums[i];
                l0+=(nums[i]==0);
            }
        }
        return ans;
    }
};

