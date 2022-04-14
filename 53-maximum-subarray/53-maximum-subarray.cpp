class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=nums[0],sum=0;
        for(auto &x:nums){
            sum+=x;
            if(sum>maxSum)maxSum=sum;
            if(sum<=0)sum=0;
        }
        return maxSum;
    }
};
