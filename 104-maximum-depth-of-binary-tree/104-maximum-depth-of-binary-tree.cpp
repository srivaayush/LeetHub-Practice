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
/*
class Solution {
public:
    // int height=0;
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        int leftheight= maxDepth(root->left);
        int rightheight=maxDepth(root->right);
        int height=1+max(leftheight,rightheight);
        return height;
    }
};*/







class Solution {
public:
    // int height=0;
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        int leftheight=maxDepth(root->left);
        int rightheight=maxDepth(root->right);
        int height=1+max(leftheight,rightheight);
        return height;
    }
};