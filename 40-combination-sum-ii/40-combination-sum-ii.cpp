//BRUTE FORCE
//TC (2^n)*k*(logN)
// class Solution {
// private:
//     void helper(set<vector<int>> &ans,vector<int> &cmb, int i,int n,int target,vector<int>& candidates){
//         if(i==n){
//             if(target==0 ){
//                 ans.insert(cmb);                
//             }
//             return;
//         }
//         if(candidates[i]<=target){
//             cmb.push_back(candidates[i]);
//             helper(ans,cmb,i+1,n,target-candidates[i],candidates);
//             cmb.pop_back();             
//         }
//         helper(ans,cmb,i+1,n,target,candidates);
//     }  
// public:
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         set<vector<int>>  ans;
//         vector<int> cmb;
//         int n=candidates.size();
//         sort(candidates.begin(),candidates.end());
//         helper(ans,cmb,0,n,target,candidates);   
//         vector<vector<int>> res;
//         for(auto &x:ans)
//             res.push_back(x);
//         return res;
//     }
// };


//Optimized Solution
//TC (2^n)*k
// SC k*x
class Solution {
private:
    void helper(vector<vector<int>> &ans,vector<int> &cmb, int i,int n,int target,vector<int>& candidates){
        if(target==0){
            ans.push_back(cmb);                            
            return;
        }
        for(int j=i;j<n;j++){
            if(j>i && candidates[j]==candidates[j-1])continue;
            if(candidates[j]>target)break;            
            cmb.push_back(candidates[j]);
            helper(ans,cmb,j+1,n,target-candidates[j],candidates);
            cmb.pop_back();      
        }        
    }  
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>  ans;
        vector<int> cmb;
        int n=candidates.size();
        helper(ans,cmb,0,n,target,candidates); 
        return ans;
    }
};