class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool b1=true,b2=true;
        int prev=nums[0];
        for(auto &x:nums){
            if(x<prev){
                b1=false;
            }
            if(x>prev){
                b2=false;
            }
            prev=x;
        }
        return b1||b2;
    }
};