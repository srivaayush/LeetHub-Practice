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
private:
    int height(TreeNode* root){
        if(root==NULL)return 0;
        int lh=height(root->left);
        int rh=height(root->right);       
        return 1+max(lh,rh);
    }
    int diameter(TreeNode* root,int &maxi){
        if(root==NULL)return 0;
        int lht=height(root->left);
        int rht=height(root->right);
        
        maxi=max(lht+rht,maxi);
        int leftDia=diameter(root->left,maxi);
        int rightDia=diameter(root->right,maxi);
        
        return maxi;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        maxi=diameter(root,maxi);
        return maxi;
        
    }
};