/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast!=NULL && fast->next!=NULL ){
            fast=fast->next->next;
            slow=slow->next;  
            if(slow==fast)
                break;
        }
        if(fast==NULL ||fast->next==NULL)return NULL;
        slow=head;
        while(fast!=NULL)
        {
            if(slow==fast)
                return slow;
            fast=fast->next;
            slow=slow->next; 
        }       
        return NULL;
    }
};