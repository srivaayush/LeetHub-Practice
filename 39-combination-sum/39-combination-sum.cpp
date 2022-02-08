class Solution {
private:
    void helper(vector<vector<int>> &ans,vector<int> &cmb, int i,int n,int target,vector<int>& candidates){
        if(i==n ||target<=0){
            if(target==0)
            ans.push_back(cmb);
            return;
        }
        target=target-candidates[i];
        cmb.push_back(candidates[i]);
        helper(ans,cmb,i,n,target,candidates);
        cmb.pop_back();
        target=target+candidates[i];
        helper(ans,cmb,i+1,n,target,candidates);
    }    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {        
        vector<vector<int>>  ans;
        vector<int> cmb;
        int n=candidates.size();
        helper(ans,cmb,0,n,target,candidates);    
        return ans;
    }
};