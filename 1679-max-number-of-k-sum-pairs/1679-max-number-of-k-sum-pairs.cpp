class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> mp;
        int ans=0;
        for(auto &x:nums)
            mp[x]++;
        for(auto &x:mp){
            int p=k-x.first;
            if(mp.find(p)==mp.end())
                continue;
            // cout<<x.first<<"  "<<x.second<<"  "<<k<<endl;
            if(p==x.first){
                ans+=(x.second/2);
                x.second=0;
                mp[p]=0;
            }
            else{
                ans+=min(x.second,mp[p]);
                x.second=0;
                mp[p]=0;
            }           
        }
        return ans;
    }
};