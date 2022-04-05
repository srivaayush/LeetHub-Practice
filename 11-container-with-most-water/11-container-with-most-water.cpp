class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int lo=0,hi=n-1;
        int ans=0;
        while(lo<hi){
            int prod=min(h[lo],h[hi])*(hi-lo);
            ans=max(ans,prod);
            if(h[lo]<h[hi])lo++;
            else hi--;
        }
        return ans;
    }
};