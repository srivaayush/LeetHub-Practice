class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        int ans = 0, c = 0;
        mp[0]=-1;
        for (int i=0;i<n;i++) {
            c = c + (nums[i] == 1 ? 1 : -1);
            if (mp.find(c) != mp.end())               
                ans = max(ans, i - mp[c]);             
            else 
                mp[c]=i;
        }
        return ans;
    }
};