class Node{
public:
    Node *links[2];
    bool containsKey(int n){
        return (links[n]!=NULL);
    }
    
    Node* get(int n){
        return links[n];
    }
    void put(int n, Node *node){
        links[n]=node;
    }
};
class Trie{
private:
    Node *root;
public:
    Trie(){
        root=new Node();
    }
public:
    void insert(int num){
        Node* node=root;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(!node->containsKey(bit)){
                node->put(bit, new Node());
            }
            node=node->get(bit);
        }
    }
public:
    int getMax(int num){
        Node* node=root;
        int maxNum=0;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;            
            if(node->containsKey(1-bit)){
                maxNum=maxNum|(1<<i);
                node=node->get(1-bit);
            }
            else{
                node=node->get(bit);
            }
        }
        return maxNum;
    }    
};
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie trie;
        for(auto &x:nums){
            trie.insert(x);
        }
        int maxi=0;
        for(auto &x:nums){
            maxi=max(maxi,trie.getMax(x));
        }
        return maxi;
    }
};