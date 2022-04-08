class LRUCache {
public:
    class Node{
       public:
        int key;
        int val;
        Node *prev;
        Node *next;
        Node(int _key,int _val){
            key=_key;
            val=_val;
        }        
    };
public:
    Node *head=new Node(-1,-1);
    Node *tail=new Node(-1,-1);    
    unordered_map<int,Node*> mp;    
    int cap;    
    void addNode(Node *newNode){
        Node *temp=head->next;
        head->next=newNode;
        newNode->prev=head;
        newNode->next=temp;
        temp->prev=newNode;        
    }
    void deleteNode(Node* delNode){
        Node* delPrev=delNode->prev;
        Node* delNext=delNode->next;
        delPrev->next=delNext;
        delNext->prev=delPrev;        
    }
public:    
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }    
    int get(int _key) {
        if(mp.find(_key)!=mp.end()){
            Node* resNode=mp[_key];
            int res=resNode->val;
            mp.erase(_key);
            deleteNode(resNode);
            addNode(resNode);
            mp[_key]=head->next;
            return res;
        }      
        return -1;
    }
    void put(int _key, int value) {
        if(mp.find(_key)!=mp.end()){
            Node* existingNode=mp[_key];
            mp.erase(_key);
            deleteNode(existingNode);
        }     
        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new Node(_key,value));
        mp[_key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */