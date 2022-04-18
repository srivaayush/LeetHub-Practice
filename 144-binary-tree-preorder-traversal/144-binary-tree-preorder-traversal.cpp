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
public:
    vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {                
        if(root==NULL)return ans;
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return ans;        
    }
};*/

/* ITERATIVE SOLUTION
class Solution {    
public:
    vector<int> preorderTraversal(TreeNode* root) {    
        vector<int> ans;
        if(root==NULL)return ans;
        stack<TreeNode*> st;
        st.push(root);
        while(st.empty()==false){
            TreeNode* node=st.top();
            ans.push_back(node->val);
            st.pop();
            if(node->left)st.push(node->left);
            if(node->right)st.push(node->right);            
        }
        return ans;
    }
};
*/
class Solution {    
public:
    vector<int> preorderTraversal(TreeNode* root) {    
        vector<int> ans;
        if(root==NULL)return ans;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode *sttop=st.top();
            ans.push_back(sttop->val);
            st.pop();
            if(sttop->right!=NULL)
                st.push(sttop->right);
            if(sttop->left!=NULL)
                st.push(sttop->left);
        }
        return ans;
    }
};