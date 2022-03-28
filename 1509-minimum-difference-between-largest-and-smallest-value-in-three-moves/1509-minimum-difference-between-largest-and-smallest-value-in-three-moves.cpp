class Solution {
public:
    int minDifference(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        if(n<=3)return 0;
        
        vector<int> res={(nums[n-1]-nums[3]), (nums[n-4]-nums[0]), (nums[n-2]-nums[2]), (nums[n-3]-nums[1])};
        int ans=*min_element(res.begin(),res.end());
        return ans;
    }
};