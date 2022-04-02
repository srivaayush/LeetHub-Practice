class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int> v=nums;
        while(v.size()!=1){
            nums.clear();
            int n=v.size();
            for(int i=0;i<n-1;i++){
                nums.push_back((v[i]+v[i+1])%10);
            }
            v.clear();
            v=nums;
        }
        return v[0];
    }
};