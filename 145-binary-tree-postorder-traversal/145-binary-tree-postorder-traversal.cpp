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
/*POSTORDER RECURSIVE SOLUTION
class Solution {
public:
    vector<int>ans;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL)return ans;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        ans.push_back(root->val);
        return ans;
    }
};*/

/*POSTORDER ITERATIVE SOLUTION (Using 2 stacks)
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        stack<TreeNode*> st1,st2;
        st1.push(root);
        while(!st1.empty()){
            TreeNode*node=st1.top();
            st2.push(node);
            st1.pop();
            if(node->left)st1.push(node->left);
            if(node->right)st1.push(node->right);
        }
        while(!st2.empty()){
            TreeNode*node=st2.top();
            st2.pop();
            ans.push_back(node->val);
        }                
        return ans;
    }
};*/

/*POSTORDER ITERATIVE SOLUTION (Using 1 stack)
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        stack<TreeNode*> st1;
        st1.push(root);
        while(!st1.empty()){
            TreeNode*node=st1.top();
            ans.push_back(node->val);
            st1.pop();
            if(node->left)st1.push(node->left);
            if(node->right)st1.push(node->right);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};*/

/*POSTORDER ITERATIVE SOLUTION (Using 1 stack)
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        stack<TreeNode*> st1;
        st1.push(root);
        while(!st1.empty()){
            TreeNode*node=st1.top();
            ans.push_back(node->val);
            st1.pop();
            if(node->left)st1.push(node->left);
            if(node->right)st1.push(node->right);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
*/
/*POSTORDER ITERATIVE SOLUTION (Using 2 stack)*/
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        stack<TreeNode*> st1,st2;
        st1.push(root);
        while(!st1.empty()){
            TreeNode *tp=st1.top();
            st1.pop();
            st2.push(tp);
            if(tp->left!=NULL)st1.push(tp->left);
            if(tp->right!=NULL)st1.push(tp->right);
        }
        while(!st2.empty()){
            TreeNode *tp=st2.top();
            st2.pop();
            ans.push_back(tp->val);
        }
        
        return ans;
    }
};







