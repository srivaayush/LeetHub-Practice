class Solution {
public:
    int threeSumClosest(vector<int>& a, int target) {
        sort(a.begin(),a.end());
        // return 0;
        int n=a.size();
        if(n<3)
            return -1;
        int res=a[0]+a[1]+a[2];
        int ans=0;
        for(int i=0;i<n;i++){
            if(i > 0 && a[i] == a[i-1]) continue;
            int j=i+1,k=n-1;
            int rS=target-a[i];
            while(j<k){
                int dif=target-(a[i]+a[j]+a[k]);
                int curSum=a[i]+a[j]+a[k];
                if(curSum == target) return target;
                if(abs(target-curSum)<abs(target-res)) {
                    res = curSum;
                }
                if(curSum > target) {
                    --k;
                } else {
                    ++j;
                }
                // res=min(res,dif);
                // if(res>dif){
                //     res=dif;
                //     ans=a[i]+a[j]+a[k];
                // }
                // if(a[j]+a[k]<rS){
                //     j++;
                // }
                // else if(a[j]+a[k]>rS){
                //     k--;
                // }
                // else{
                //     return target;
                //     break;
                // }
            }
        }
        return res;
    }
};