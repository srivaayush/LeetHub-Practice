class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int copy=nums[0];
        int cnt=1;int n=nums.size();
        for(int i=0;i<n;i++){
            if(copy==nums[i]){
                cnt++;
            }
            else
                cnt--;
            
            if(cnt==0)
            {
                copy=nums[i];cnt=1;
            }
        }
        return copy;
    }
};
