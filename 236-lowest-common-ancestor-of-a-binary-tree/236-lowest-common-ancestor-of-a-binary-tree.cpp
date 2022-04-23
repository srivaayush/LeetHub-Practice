/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/* BRUTE FORCE 
class Solution {
private:
    bool findPath(TreeNode* root, TreeNode* x,vector<TreeNode*> &v){
     if(!root)
     return false;
     v.push_back(root);
     if(root == x)return true;
     if(findPath(root->left, x, v) || findPath(root->right,x, v))
     return true;
     v.pop_back();
     return false;
 }
private:
    TreeNode* lastMatchingPoint(vector<TreeNode*> &v1,vector<TreeNode*> &v2){
        int n1=v1.size(),n2=v2.size();
        TreeNode* ans=v1[0];
        for(int i=0;i<n1 && i<n2;i++){
            if(v1[i]!=v2[i]){
                return ans;
            }
            ans=v1[i];
        }
        return ans;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> v1,v2;

        bool res1=findPath(root,p,v1);
        bool res2=findPath(root,q,v2);
        
        return lastMatchingPoint(v1,v2);
    }
};
*/
/* Optimized Solution */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || root==p || root==q)
            return root;
        
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
        
        if(left==NULL)
            return right;
        else if(right==NULL)
            return left;
        else 
            return root;
        
    }
};


