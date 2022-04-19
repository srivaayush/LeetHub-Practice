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
    int findMaxPath(TreeNode* root,int &maxi){
        if(root==NULL)
            return 0;
        int leftSum=findMaxPath(root->left,maxi);
        int rightSum=findMaxPath(root->right,maxi);
        if(leftSum<0)leftSum=0;
        if(rightSum<0)rightSum=0;
        maxi=max(maxi,root->val+leftSum+rightSum);
        
        return root->val+max(leftSum,rightSum);        
    }    
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;        
        int res=findMaxPath(root,maxi);
        return maxi;
    }
};