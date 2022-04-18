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
    void fillVector(vector<int> &v,TreeNode* root){
        if(root==NULL)return;   
        if(root!=NULL)
        v.push_back(root->val);
        if(root->left!=NULL)
            fillVector(v,root->left);
        if(root->right!=NULL)
            fillVector(v,root->right);         
        return;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        fillVector(v,root);
        sort(v.begin(),v.end());
        cout<<v.size();
        return v[k-1];
    }
};;