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
    void fill(vector<int> &v,ListNode* node){
        while(node!=NULL){
            v.push_back(node->val);
            node=node->next;
        }
    }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> v;
        ListNode* node=head;
        fill(v,node);
        int n=v.size();
        int k=0;left--;right--;
        for(int i=left;i<=(left+right)/2 && i<n && i>=0;i++){
            swap(v[i],v[right-k]);k++;
        }
        node=head;
        for(int i=0;i<n;i++){
            node->val=v[i];
            node=node->next;
        }
        return head;
    }
};
// if(li==-1 || ri==-1)return head;
// while(node!=NULL){
//     v.push_back(node->val);
//     node=node->next;
// }
// cout<<v[i]<<" ";
// int li=-1,ri=-1;
// for(int i=0;i<n;i++){
//     if(li==-1 && v[i]==left){
//         li=i;
//     }
//     if(li!=-1 && v[i]==right){
//         ri=i;
//         break;
//     }
// }