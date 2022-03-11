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
    int getSize(ListNode* head){
        int n=0;
        while(head!=NULL){
            head=head->next;
            n++;
        }
        return n;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* fast=head;
        int n=getSize(head);
        if(head==NULL || n==0)return head;
        k=k%n;
        if(k==0)return head;
        
        for(int i=0;i<n-k-1;i++)
            fast=fast->next;
        temp=fast->next;
        fast->next=NULL;
        ListNode *keep=temp;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=head;
        return keep;
    }
};