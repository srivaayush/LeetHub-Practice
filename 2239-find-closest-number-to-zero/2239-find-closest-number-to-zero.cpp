class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini=INT_MAX,mn=0;
        for(auto &x:nums){
            int p=abs(x);
            if(mini>p){
                mini=p;
                mn=x;
            }
            if(mini==p){
                mini=p;
                mn=max(mn,x);
            }
        }
        return mn;
    }
};