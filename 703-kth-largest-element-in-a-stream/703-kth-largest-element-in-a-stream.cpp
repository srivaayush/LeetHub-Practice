class KthLargest {
public:
    int k;
    priority_queue<int,vector<int>, greater<int>> pq,pq1;
    
    vector<int> nums;
    multiset<int,greater<int>> ms;
    
    map<int,int, greater<int> >mp;
    KthLargest(int _k, vector<int>& _nums) {
        k=_k;
        sort(_nums.begin(),_nums.end(),greater<int>());
        for(int i=0;i<_nums.size() && i<k;i++)
            pq.push(_nums[i]);
        
        pq1=pq;
        
        
        cout<<pq.size();
        
    }    
    int add(int val) {
        if(pq.size()>=k){
            if(pq.top()>val)return pq.top();
            else{
                pq.pop();
                pq.push(val);
                return pq.top();
            }
        }
        pq.push(val);
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */