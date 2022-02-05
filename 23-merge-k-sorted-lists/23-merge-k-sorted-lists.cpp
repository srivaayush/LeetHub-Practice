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
    vector<int> sortList(vector<ListNode*>& lists){
        vector<int> v;
        for(auto &x: lists){
            while(x!=NULL){
                v.push_back(x->val);
                x=x->next;
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v=sortList(lists);
        ListNode* ans=new ListNode(INT_MIN);
        ListNode* head=ans;
        int n=v.size();
        for(int i=0;i<n;i++){
            ans->next=new ListNode(v[i]);
            ans=ans->next;
        }
        return head->next;
    }
};