class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        int n=nums.size();
        for(auto &x:nums){
            if(j<2||x>nums[j-2])
                nums[j++]=x;
        }
        return j;
    }
};