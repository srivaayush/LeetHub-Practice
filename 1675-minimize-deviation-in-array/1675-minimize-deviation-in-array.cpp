class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int> s;
        for(auto &x:nums){
            if(x%2!=0)
                x*=2;
            s.insert(x);
        }
        int ans=INT_MAX;
        auto start=s.begin();
        auto last = s.end();
        last--;
        while((*last)%2==0){
            int sub=((*last)-(*start));
            // cout<<sub;
            ans=min(sub,ans);
            int keep=*last/2;
            s.erase(*last);
            s.insert(keep);
            last=s.end();
            last--;
            start=s.begin();
        }
        ans=min((((*last)-(*start))),ans);
        return ans;
    }
};