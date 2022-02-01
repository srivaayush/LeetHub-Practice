class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int n=prices.size();
        vector<int> maxi(n,INT_MIN);
        maxi[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            maxi[i]=max(prices[i],maxi[i+1]);
        }
        for(int i=0;i<n;i++){
            ans=max(ans,(maxi[i]-prices[i]));
        }
        if(ans<0)return 0;
        return ans;
    }
};