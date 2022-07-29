class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sm=accumulate(nums.begin(),nums.end(),0);
        int ans=-1;int l=nums.size();
        int ls=0;int rs=sm;
        for(int i=0;i<l;i++){
            if(i!=0)
                ls+=nums[i-1];
            rs=rs-nums[i];
            if(ls==rs)return i;
        }
        return ans;
    }
};