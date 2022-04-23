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
   void findPaths(vector<vector<int>> &res,TreeNode* root,vector<int> &v){
        if(!root)
        return ;
        
        if(root->left==NULL && root->right ==NULL){
           res.push_back(v);        
        }
        if(root->left!=NULL){
            v.push_back(root->left->val);
            findPaths(res, root->left, v);
            v.pop_back();
        }
         
        if(root->right!=NULL){
            v.push_back(root->right->val);
         findPaths(res, root->right,v);
            v.pop_back();
        }
        
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<vector<int>> res;
        vector<int> v;
        vector<string> ans;
        if(root==NULL)return ans;
        
        v.push_back(root->val);
         findPaths(res,root,v);
        for(auto &x:res){
            string st="";
            for(auto &y:x){
                st+=to_string(y);
                st+="->";
            }
            st.pop_back();
            st.pop_back();
            ans.push_back(st);
        }
        return ans;
    }
};