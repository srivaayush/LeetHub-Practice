class Solution {
public:
    string breakPalindrome(string pal) {
        bool b=true;
        int n=pal.size();
        for(int i=0;i<n/2;i++){   
            char x=pal[i];
            if(x!='a'){
                pal[i]='a';
                return pal;
            }
        }
        if(n!=1){
            pal[n-1]='b';
            return pal;
        }
        return "";
    }
};