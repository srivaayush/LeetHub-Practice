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
    ListNode* h =NULL;
    Solution(ListNode* head) {
        h=head;
    }
    
    int getRandom() {
        ListNode* curr= h;
        ListNode* res;
        int n=1;
        while(curr) {
            if (rand()% n == 0)
            res = curr;
            curr = curr->next;
            n++;
        }
        return res->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */