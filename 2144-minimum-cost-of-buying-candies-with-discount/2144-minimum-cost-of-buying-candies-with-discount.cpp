class Solution {
public:
    int minimumCost(vector<int>& c) {
        sort(c.begin(),c.end());
         reverse(c.begin(), c.end()); 
        int i=0,n=c.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(i%3==2)continue;
            ans+=c[i];
        }
        return ans;
    }
};