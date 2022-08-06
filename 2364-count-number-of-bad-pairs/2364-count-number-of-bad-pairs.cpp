class Solution {
public:
    long long countBadPairs(vector<int>& a) {
        long long c=0,n=a.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]-i]++;
        }
        
        for(auto &x:mp){
            int y=x.second;
            n=n-y;
            c+=((y*n)*1ll);
        }
        return c;
    }
};