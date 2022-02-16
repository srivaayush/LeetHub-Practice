class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for (int i=1;i<n;i+=2)
            swap(nums[i],nums[i-1]);
        return nums;
    }
};