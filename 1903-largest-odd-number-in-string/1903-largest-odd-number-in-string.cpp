class Solution {
public:
    string largestOddNumber(string nums) {
        // reverse(nums.begin(),nums.end());
        int n=nums.size();
        // string ans=;
        for(int i=0;i<n;i++){
            if(nums[n-1-i]%2==0)
                nums.pop_back();
            else
                break;                
        }        
        return nums;
    }
};