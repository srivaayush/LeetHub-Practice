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

/*RECURSIVE APPROACH
TC - O(N)
SC - O(N)
*/
// class Solution {
// public:
//     int sum=0;
//     TreeNode* convertBST(TreeNode* root) {
//         if(root==NULL) return NULL;
//         convertBST(root->right);
        
//         sum+=root->val;
//         root->val=sum;
//         convertBST(root->left);
//         return root;       
//     }
// };

class Solution {
public:
    int sum=0;
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL) return NULL;
        TreeNode *tempRoot=root;
        stack<TreeNode*> st;
        while(!st.empty() || tempRoot!=NULL){
            while(tempRoot!=NULL){
                st.push(tempRoot);
                tempRoot=tempRoot->right;
            }
            tempRoot=st.top();
            st.pop();
            sum+=tempRoot->val;
            tempRoot->val=sum;
            tempRoot=tempRoot->left;
        }
        return root;
    }
};