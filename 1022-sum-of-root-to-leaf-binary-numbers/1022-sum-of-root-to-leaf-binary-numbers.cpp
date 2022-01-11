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
// private: 
//     int solve((TreeNode* root)
//     {
//         if(root==NULL){
            
//         }
//         ans.push_back(root->val);
        
//     }
public:
    // int ans=0;
    string a="";
    string b="";
    int sumRootToLeaf(TreeNode* root,int ans=0) {
        if(root==NULL)return 0;
        ans = (ans * 2 + root->val);
        return root->left == root->right ? ans : sumRootToLeaf(root->left, ans) + sumRootToLeaf(root->right, ans);
        
    }
        
    
};