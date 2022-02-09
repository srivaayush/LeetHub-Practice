class Solution {
private:
    void helper(vector<int>& nums,int i,int n,vector<int> &sub,set<vector<int>> &ans){
        if(i==n){
           ans.insert(sub);
            return;
        }
        //condition to pick
        sub.push_back(nums[i]);
        helper(nums,i+1,n,sub,ans);
        //condition to don't pick
        sub.pop_back();
        helper(nums,i+1,n,sub,ans);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        vector<int> sub;
        int n=nums.size();
        helper(nums,0,n,sub,ans);
        vector<vector<int>> res;
        for(auto &x:ans)res.push_back(x);
        return res;
    }
};