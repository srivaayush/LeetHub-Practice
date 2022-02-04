class Solution {
public:
    int totalMoney(int n) {
        int ans=0,p=1,k=1;
        
        for(int i=1;i<=n;i++){
            ans+=p;p++;
            if(i%7==0){
                k++;p=k;
            }
        }
        return ans;
    }    
};