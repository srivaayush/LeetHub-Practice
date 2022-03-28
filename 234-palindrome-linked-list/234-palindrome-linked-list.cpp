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
    ListNode*temp;
    bool check(ListNode* head){
        if (head==NULL) return true;
        bool isPal = (check(head->next) && (temp->val == head->val));
        temp = temp->next;
        return isPal;
    }
public:
    bool isPalindrome(ListNode* head) {
        temp=head;
        return check(head);
    }
};