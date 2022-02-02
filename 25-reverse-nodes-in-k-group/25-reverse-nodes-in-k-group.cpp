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
    void reverse(vector<int> &arr, int n, int k){
        int p=n/k;
        for (int i = 0; i < n && p>0; i += k){
            p--;
            int left = i;
            int right = min(i + k - 1, n - 1);
            while (left < right)
                swap(arr[left++], arr[right--]);
        }
    }    
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // vector<ListNode*> temp;
        ListNode* new_head=NULL;
        ListNode* ans_head=new_head;
        ListNode* temp_head=head;
        int n=0; vector<int> temp;
        while(temp_head!=NULL){
            temp.push_back(temp_head->val);
            temp_head=temp_head->next;
        } 
        n=temp.size();int i=0;
        reverse(temp,n,k);
        
        temp_head=head;
        for(auto &x:temp){
            temp_head->val=x;
            temp_head=temp_head->next;
        }
        
        return head;
    }
};