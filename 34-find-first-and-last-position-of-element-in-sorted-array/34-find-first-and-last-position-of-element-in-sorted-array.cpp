class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=-1,u=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                l=i;break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                u=i;break;
            }
        }
        return {l,u};
    }
};