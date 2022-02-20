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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> v;
        vector<int> v0;int i=0;
        ListNode* keep=head;
        while(head!=NULL){
            v.push_back(head->val);
            if(head->val ==0)
                v0.push_back(i);
            i++;
            head=head->next;
        }
        
        vector<int> ans;
        for( i=1;i<v0.size();i++){
            int sum=0;
            int s=v0[i-1],l=v0[i];
            for(int j=s;j<l;j++){
                sum+=v[j];                
            }
            ans.push_back(sum);
        }
        head=keep;
        int mn=ans.size();
        for(i=0;i<mn;i++){
            head->val=ans[i];
            if(i!=(mn-1))
            head=head->next;
        }
        head->next=NULL;
        return keep;
        
    }
};