class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int ans=0;
        int n=nums.size();
        map<string,int> m;
        // for(auto &x:nums){
        //     m[x]++;
        // }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==i)continue;
                if((nums[i]+nums[j])==target)
                    ans++;
            }
        }
        return ans;
    }
};