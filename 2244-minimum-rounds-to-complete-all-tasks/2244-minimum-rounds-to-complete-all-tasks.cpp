class Solution {
    typedef long long ll;
public:
    int minimumRounds(vector<int>& a) {
        map<int,int> mp;
        for(auto &x:a){
            mp[x]++;
        }
        int ans=0;
        for(auto &x:mp){                          
                int t=x.second;
                int a=t/3;
                t=t%3;     
                if(t==0){
                    ans+=a;
                    continue;
                    
                }
                else
                    ans+=(a+1);
            if(x.second==1)
            return -1;
        }
        return ans;        
    }
};