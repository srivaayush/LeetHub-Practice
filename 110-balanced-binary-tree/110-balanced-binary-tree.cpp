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



/*BRUTE FORCE

class Solution {
private:
    int findHeight(TreeNode* root){
        if(root==NULL)return 0;
        int lh=findHeight(root->left);
        int rh=findHeight(root->right);
        int h= 1+max(lh,rh);
        return h;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int lh=findHeight(root->left);
        int rh=findHeight(root->right);
        
        if(abs(lh-rh)>1)
            return false;
        
        
        bool lcheck=isBalanced(root->left);
        bool rcheck=isBalanced(root->right);
        
        if(lcheck==false|| rcheck==false )
            return false;
        return true;
    }
};

*/

/*class Solution {
private:
    int heightDiff(TreeNode* root){
        
        if(root==NULL)return 0;
        
        int lh=heightDiff(root->left);
        if(lh==-1)
            return -1;
        
        
        int rh=heightDiff(root->right);
        if(rh==-1)
            return -1;
        
         if(abs(lh-rh)>1)
            return -1;
        
        int h= 1+max(lh,rh);
        return h;
    }
public:
    bool isBalanced(TreeNode* root) {
        
        return( heightDiff(root)!=-1);
    }
};*/

class Solution {
private:
    int findHeight(TreeNode* root){
        if(root==NULL)return 0;
        int lh=findHeight(root->left);
        int rh=findHeight(root->right);
        int h= 1+max(lh,rh);
        return h;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int lh=findHeight(root->left);
        int rh=findHeight(root->right);
        if(abs(lh-rh)>1)
            return false;
        bool lbal=isBalanced(root->left);
        bool rbal=isBalanced(root->right);
        if(lbal==false || rbal==false)return false;
        return true;
    }
};
