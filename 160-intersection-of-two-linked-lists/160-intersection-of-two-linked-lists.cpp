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
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        set<ListNode*> s1;
        while(h1!=NULL)
        {
            s1.insert(h1);
            h1=h1->next;
        }
        while(h2!=NULL){
            if(s1.find(h2)!=s1.end())
                return h2;
            h2=h2->next;
        }
        return NULL;
    }
};