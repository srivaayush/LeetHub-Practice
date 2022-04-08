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
public:
    int sz;
    ListNode* head;
public:
    Solution(ListNode* _head) {
        head=_head;
        ListNode *temp=head;
        sz=0;
        while(temp!=NULL){
            sz++;
            temp=temp->next;
        }
    }
    
    int getRandom() {
        ListNode *temp=head;
        int rnd=rand()%sz;int k=0;
        while(k<rnd){
            temp=temp->next;
            k++;
        }
        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */