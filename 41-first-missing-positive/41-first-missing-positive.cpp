class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;){
            int x=nums[i];
            if(x<=0 || x>=n || x==nums[x-1]){
                i++;
            }
            else{
                swap(nums[i],nums[x-1]);
            }
            
        }
        for(int i=0;i<n;i++){
            if((i+1)!=nums[i])return i+1;
        }
        return n+1;
    }
};