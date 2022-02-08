class Solution {
private:
    void helper(vector<int>& nums,int i,int n,vector<int> &sub,vector<vector<int>> &ans){
        if(i==n){
            if(sub.size()==0)
                ans.push_back({});
            else
                ans.push_back(sub);
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
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sub;
        int n=nums.size();
        helper(nums,0,n,sub,ans);
        return ans;
    }
}; 