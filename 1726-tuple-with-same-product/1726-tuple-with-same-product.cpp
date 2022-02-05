class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        map<int,int> mp;int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int p=nums[i]*nums[j];
                ans+=8*mp[p];
                mp[p]++;
            }
        }
        return ans;
    }
};