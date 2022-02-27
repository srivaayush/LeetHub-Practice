class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode *,long long>> q;
        q.push({root,0});
        long long ans=0;
        while(q.empty()==false){
            long long s=q.size();
            long long l=q.front().second;
            for(int i=0;i<s;i++){
                ans=max(ans,(long long)q.front().second-l);
                if(q.front().first->left) 
                    q.push({q.front().first->left,q.front().second*2-l});
                if(q.front().first->right) 
                    q.push({q.front().first->right,q.front().second*2+1-l});
                q.pop();
            }
        }
        return ans+1;
    }
};