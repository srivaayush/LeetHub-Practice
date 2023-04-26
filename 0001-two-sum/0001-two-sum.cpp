class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        int n=nums.size();
        for (int i = 0; i < n; i++) 
        {
            if (um.find(target - nums[i]) != um.end()) 
            {
                return {um[target - nums[i]], i};
            }
            um[nums[i]] = i;
        }
        return {};
    }
};