/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    vector<int> fill(ListNode* head){
        vector<int> v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        return v;
    }
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        vector<int>v= fill(temp);
        swap(v[k-1],v[v.size()-k]);
        temp=head;int i=0;
        while(temp!=NULL){
            temp->val=v[i];i++;
            temp=temp->next;
        }
        return head;
    }
};