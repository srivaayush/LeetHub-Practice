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
    int n=0;
private:
    int addBT(TreeNode* root)
    {
        if (root == NULL)
            return 0;
        n++;
        return (root->val + addBT(root->left) + addBT(root->right));
    }
public:
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL)return 0;
        queue<TreeNode*> q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            // vector<int> res;
            int qs=q.size();
            for(int i=0;i<qs;i++){
                TreeNode *qt=q.front();
                q.pop();
                if(qt->left!=NULL)
                    q.push(qt->left);
                if(qt->right!=NULL)
                    q.push(qt->right);
                
                n=0;
                int trav=addBT(qt);
                if(trav/n==qt->val)ans++;
                // res.push_back(qt->val);
            }
            // ans.push_back(res);                
        }
        return ans;
    }
};