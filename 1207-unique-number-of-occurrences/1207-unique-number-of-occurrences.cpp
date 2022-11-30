class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m1,m2;
        for(auto &x:arr)
            m1[x]++;
        
        for(auto &x:m1)
            m2[x.second]++;
        
        for(auto &x:m2)
            if(x.second>1)return false;
        
        return true;
        
    }
};