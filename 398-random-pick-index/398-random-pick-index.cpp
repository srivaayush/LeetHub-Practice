class Solution {
public:
    vector<int> ans;
    Solution(vector<int>& nums) {
        // int n=nums.size();
        for(auto &x:nums){
            ans.push_back(x);
        }
    }
    
    int pick(int target) {
        int n=ans.size();
        int a=int(rand()%n);
        // cout<<a;
        if(ans[a]!=target)
            return pick(target);
        return a;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */