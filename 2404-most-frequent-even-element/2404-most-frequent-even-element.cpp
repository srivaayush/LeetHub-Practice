class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> m;
        bool f=0;
        for(auto &x:nums){
            if(x%2==0){
            m[x]++;
            f=true;
            }
        }
        map<int,vector<int>,greater<int>> mp;
        for(auto &y:m){
            mp[y.second].push_back(y.first);
        }
        if(!f)return -1;
        
        for(auto &x:mp){
            return x.second[0];            
        }
        return 0;
    }
};