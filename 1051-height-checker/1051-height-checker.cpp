class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected=heights;
        sort(expected.begin(),expected.end());
        int ans=0,n=heights.size();
        for(int i=0;i<n;i++){
            if(expected[i]!=heights[i])ans++;
        }
        return ans;
    }
};