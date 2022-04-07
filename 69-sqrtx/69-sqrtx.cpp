class Solution {
    typedef long long ll;
public:
    int mySqrt(int x) {
        ll lo=1,hi=x;
        if(x==1)return 1;
        while(lo<=hi){
            ll md=lo+(hi-lo)/2;
            ll p=md*md;
            if(p==x)return md;
            else if(p<x)lo=md+1;
            else hi=md-1;
        }
        return lo-1;
    }
};