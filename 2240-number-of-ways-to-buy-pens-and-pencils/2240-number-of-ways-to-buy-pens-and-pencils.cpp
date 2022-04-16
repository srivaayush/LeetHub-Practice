class Solution {
    typedef long long ll;
public:
    long long waysToBuyPensPencils(int t, int c1, int c2) {
        int i=0,j=0; 
        ll ans=0;    
        int p=(t-(c1*i));
        while(p > 0){
            p=(t-(c1*i));
            if(p<0)break;
            ans+=((ll)(p/c2)+1);
            i++;
        }
        return ans;
    }
};