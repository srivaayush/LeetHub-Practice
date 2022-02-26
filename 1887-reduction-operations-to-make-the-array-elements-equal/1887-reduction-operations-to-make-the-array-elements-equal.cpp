class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int i=0,j=1,n=nums.size(),ans=0;
        while(j<n){
            if(nums[j-1]!=nums[j])
                ans+=j;
            j++;
        }
        return ans;
    }
};