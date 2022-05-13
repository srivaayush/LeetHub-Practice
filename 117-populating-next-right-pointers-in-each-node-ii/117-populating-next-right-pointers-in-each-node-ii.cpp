/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
    public:
        Node* connect(Node *root)
        {
            Node *keeproot = root;
            vector<vector<Node*>> ans;
            if (root == NULL) return keeproot;
            queue<Node*> q;
            q.push(root);
            while (!q.empty())
            {
                vector<Node*> res;
                int qs = q.size();
                for (int i = 0; i < qs; i++)
                {
                    Node *qt = q.front();
                    q.pop();
                    if (qt->left != NULL)
                        q.push(qt->left);
                    if (qt->right != NULL)
                        q.push(qt->right);
                    res.push_back(qt);
                }
                ans.push_back(res);
            }
            for (auto &x: ans)
            {
                for (int i = 0; i < x.size() - 1; i++)
                {
                    x[i]->next = x[i + 1];
                }
            }
            return keeproot;
        }
};