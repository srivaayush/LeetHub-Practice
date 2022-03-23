class Solution {
public:
    int brokenCalc(int strt, int target) {
        int ans=0;
        while(strt<target){
            if(target%2==1){
                target++;
            }
            else{
                target=target/2;
            }
            ans++;
        }
        if(target!=strt)ans+=(strt-target);
        return ans;
    }
};