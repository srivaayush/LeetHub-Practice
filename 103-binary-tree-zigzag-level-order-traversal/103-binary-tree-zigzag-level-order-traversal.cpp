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
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        queue<TreeNode*> q;
        q.push(root);
        int a=0;
        while(!q.empty()){
            int qs=q.size();
            vector<int> res(qs);
            for(int i=0;i<qs;i++){
                TreeNode* qf=q.front();
                if(qf->left!=NULL)q.push(qf->left);
                if(qf->right!=NULL)q.push(qf->right);
                q.pop();
                int pos=i;
                if(a%2!=0)
                    pos=qs-i-1;
                res[pos]=qf->val;
            }
            ans.push_back(res);
            a++;
        }
        return ans;
    }
};