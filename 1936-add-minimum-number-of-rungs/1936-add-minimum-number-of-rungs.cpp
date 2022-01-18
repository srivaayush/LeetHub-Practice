class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int pre=0,c=0;
        int n=rungs.size();
        for(int i=0;i<n;i++){
            c+=(rungs[i]-pre-1)/dist;
            pre=rungs[i];
        }
        return c;
    }
};