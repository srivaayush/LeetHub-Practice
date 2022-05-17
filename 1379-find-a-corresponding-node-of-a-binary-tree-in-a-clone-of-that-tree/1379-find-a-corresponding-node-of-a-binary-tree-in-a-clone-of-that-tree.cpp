/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *};
 */

class Solution
{
    public:
        TreeNode* getTargetCopy(TreeNode *og, TreeNode *cloned, TreeNode *target)
        {
            if (cloned == NULL || cloned->val == target->val)
                return cloned;
            TreeNode *left = getTargetCopy(og, cloned->left, target);
            if (left)
                return left;
            return getTargetCopy(og, cloned->right, target);
        }
};