class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=0;
        for(auto &x:nums){
            if(nums[abs(x)]<0){
                ans=abs(x);
                break;
            }
            nums[abs(x)]*=-1;
        }
        for(auto &x:nums)
            if(x<0)x*=-1;
        return ans;
    }
};