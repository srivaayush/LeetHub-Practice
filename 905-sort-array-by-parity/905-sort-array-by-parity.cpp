class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]%2==0)
                swap(nums[i++],nums[j]);
            j++;
        }
        return nums;
    }
};