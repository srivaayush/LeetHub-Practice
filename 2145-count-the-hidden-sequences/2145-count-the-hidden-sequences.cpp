class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long mini=lower;
        long maxi=lower;
        long ele=lower;
        for(auto &x:differences){
            ele+=x;
            mini=min(ele,mini);
            maxi=max(ele,maxi);
        }
        long ans=(upper-lower)-(maxi-mini)+1;
        if(ans<0)ans= 0;
        return ans;
    }
};