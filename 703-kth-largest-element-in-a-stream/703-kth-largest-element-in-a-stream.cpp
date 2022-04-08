class KthLargest {
public:
    int k;
    priority_queue<int> pq;
    vector<int> nums;
    multiset<int,greater<int>> ms;
    
    map<int,int, greater<int> >mp;
    KthLargest(int _k, vector<int>& _nums) {
        k=_k;
        for(auto &x: _nums)
            mp[x]++;
            // pq.push(x);
            // nums.push_back(x);
    }    
    int add(int val) {
        int p=k;
        mp[val]++;
        
        for(auto &x:mp){
            int a=x.second;
            p=p-a;
            if(p<=0){
                // for(auto &y:mp)
                //     cout<<y.first<<" "<<y.second<<endl;
                // cout<<endl;
                
                int res=x.first;
                // x.second--;
                // if(x.second==0)
                //     mp.erase(x.first);
                return res;
            }
        }
//         ms.insert(val);
//         for(auto &x:ms){
//             p--;
//             if(p==0){
//                 int a=x;
                
                // for(auto &y:ms)
                //     cout<<y<<" ";
                // cout<<endl;
                
//                 ms.erase(x);
//                 return a;
//             }
//         }
        return 0;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */