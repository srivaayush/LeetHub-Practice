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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h=new ListNode();
        int c=0;
        ListNode* ans=h;
        while(l1!=NULL && l2!=NULL){
            int s=(l1->val + l2->val +c);
            h->val=s%10;            
            c=s/10;
            l1=l1->next;
            l2=l2->next;
            if(l2==NULL && l1==NULL &&c==0)break;
            h->next=new ListNode();
            h=h->next;
            
        } 
        
        while(l1!=NULL ){
            int s=(l1->val+c);
            h->val=s%10;
            c=s/10;
            l1=l1->next;
            if(l1==NULL &&c==0)break;
            h->next=new ListNode();            
            h=h->next;
        } 
        
        while( l2!=NULL){
            int s=( l2->val +c);
            h->val=s%10;
            c=s/10;
            l2=l2->next;
            if(l2==NULL && c==0)break;
            h->next=new ListNode();            
            h=h->next;
        }    
        if(c!=0)h->val=c;
        return ans;
    }
};