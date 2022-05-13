class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        int n=nums.size();
        int p=n;
        for(int i=n;i>0;i--)p*=i;
        for(int i=0;i<p;i++){
            s.insert(nums);
            next_permutation(nums.begin(),nums.end());
        }
        
        for(auto &x:s)ans.push_back(x);
        return ans;
    }
};