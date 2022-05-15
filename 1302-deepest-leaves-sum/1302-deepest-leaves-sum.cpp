/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)return 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> res;
            int qs=q.size();
            for(int i=0;i<qs;i++){
                TreeNode *qt=q.front();
                q.pop();
                if(qt->left!=NULL)
                    q.push(qt->left);
                if(qt->right!=NULL)
                    q.push(qt->right);
                res.push_back(qt->val);
            }
            ans.push_back(res);                
        }
        
        int s=ans.size();
        int res=0;
        for(int i=0;i<ans[s-1].size();i++)
            res+=ans[s-1][i];
        return res;
    }
};