class Solution {
public:
    int hIndex(vector<int>& cit) {
        int ans=0;
        vector<int> cnt(1001,0);
        for(auto &x:cit){
            for(int i=0;i<=x;i++)
                cnt[i]++;
        }
        for(int i=1000;i>=0;i--){
            if(cnt[i]>=i){
                return i;
            }
        }
        return ans;
    }
};