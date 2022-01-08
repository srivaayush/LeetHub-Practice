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
    int pairSum(ListNode* head) {
        vector<int> a;int n=0;
        while(head!=NULL){
            a.push_back(head->val);
            head=head->next;n++;
        }
        int p=n/2;
        int maxi=INT_MIN;
        for(int i=0;i<p;i++)
        {
            maxi=max(maxi,(a[i]+a[n-1-i]));
        }
        return maxi;
        
    }
};