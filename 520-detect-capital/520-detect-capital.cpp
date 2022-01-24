class Solution {
public:
    bool detectCapitalUse(string word) {
        int l=0,u=0,f=0;
        if(word[0]>=65 && word[0]<=90)
            f=1;
        for(auto &x:word){
            if(x>=97 && x<=122 )
                l++;
            else
                u++;
            
            if( (u>1 && l!=0) || (u==1 && l!=0 && f!=1))
                return false;
        }
        return true;
    }
};