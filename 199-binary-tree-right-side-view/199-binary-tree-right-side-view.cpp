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
/* RECURSIVE SOLUTION
class Solution {
private:
    void fill(TreeNode* node,int level,vector<int> &ans){
        if(node==NULL)return;
        if(ans.size()==level)
            ans.push_back(node->val);
        fill(node->right,level+1,ans);
        fill(node->left,level+1,ans);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        fill(root,0,ans);
        return ans;
    }
}; 
*/

// ITERATIVE SOLUTION
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){            
            int qs=q.size();
            for(int i=1;i<=qs;i++){
                TreeNode* qt=q.front();
                q.pop();
                if(qt->left!=NULL)
                    q.push(qt->left);
                if(qt->right!=NULL)
                    q.push(qt->right);
                if(i==qs)
                    ans.push_back(qt->val);
            }            
        }
        return ans;
    }
}; 