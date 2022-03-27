class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1,s2;
        for(auto &x:nums1)s1.insert(x);
        for(auto &x:nums2)s2.insert(x);
        vector<vector<int>> ans;vector<int> res,res1;
        for(auto &x:s1){
            if(s2.find(x)==s2.end())res.push_back(x);
        }
        ans.push_back(res);
        for(auto &x:s2){
            if(s1.find(x)==s1.end())res1.push_back(x);
        }
        ans.push_back(res1);
        return ans;
    }
};