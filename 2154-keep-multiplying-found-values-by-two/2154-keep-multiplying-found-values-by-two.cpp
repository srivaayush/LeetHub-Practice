class Solution {
public:
    int findFinalValue(vector<int>& nums, int og) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==og){
                og*=2;
            }
        }
        return og;
    }
};