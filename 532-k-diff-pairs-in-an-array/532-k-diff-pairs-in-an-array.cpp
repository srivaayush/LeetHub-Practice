class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int> m;
        int ans=0;
        for(auto &x:nums)
            m[x]++;
        for(auto &x:m){
            if(k==0){
                if(x.second>1)
                ans++;
            }
            else if(m.find(x.first+k) != m.end())
                ans++;            
        }
        return ans;
    }
};