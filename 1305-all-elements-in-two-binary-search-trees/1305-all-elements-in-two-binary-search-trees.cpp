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
    // map<int,int> m;
    vector<int> ans;
private:
    void getAll(TreeNode* root){
        if (root == NULL)
        return;
        getAll(root->left);
        ans.push_back(root->val);
        // m[root->val]++;
        getAll(root->right);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        getAll(root1);
        getAll(root2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};