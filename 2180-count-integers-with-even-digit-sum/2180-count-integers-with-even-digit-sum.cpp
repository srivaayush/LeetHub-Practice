class Solution {
public:
    int countEven(int num) {
        int ans=0;
        for(int i=2;i<=num;i++){
            int p=i;
            int s=0;
            while(p!=0){
                s+=p%10;
                p=p/10;                
            }
            if(s%2==0)
                ans++;
        }
        return ans;
    }
};