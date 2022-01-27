class Solution {
private:
    int removeRepeated(vector<int> &nums){
        int n=nums.size();
        if (n==0 || n==1)
        return n;
        int j = 0;
        for (int i=0; i < n-1; i++)
            if (nums[i] != nums[i+1])
                nums[j++] = nums[i];

        nums[j++] = nums[n-1];
        return j;
    }
public:
    int findMaximumXOR(vector<int>& nums) {
//         int ans=0;
//         // int n=nums.size();
//         sort(nums.begin(),nums.end());
//         int n=removeRepeated(nums);
//         // cout<<n;
//         for(int i=0;i<n;i++){            
            
//             for(int j=n-1;j>n/2;j--)
//             ans=max(ans,nums[i]^nums[j]);
//         }
//         return ans;
        int res = 0, mask = 0;
        for (int i = 31, mask = 0; i >= 0; --i) {
            mask |= (1 << i);
            set<int> s;
            for (int num : nums)  s.insert(num & mask);            
            int t = res | (1 << i);
            for (int prefix : s) 
                if (s.count(t ^ prefix)) {
                    res = t;
                    break;
                }            
        }
        return res;
    }
};