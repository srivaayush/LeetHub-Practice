class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans=0;int n=nums.size();int i=0;
        if(n<3)return 0;
        int cnt=0;
        while(i<n-2){
            if((nums[i+1]-nums[i])==(nums[i+2]-nums[i+1])){
                cnt++;
            }else {
                ans+=(cnt*(cnt+1))/2;
                cnt=0;
            }
            i++;            
        }
        ans+=(cnt*(cnt+1))/2;
        return ans;
    }
};