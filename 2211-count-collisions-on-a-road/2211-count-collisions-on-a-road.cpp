class Solution {
public:
    int countCollisions(string s) {
        int ans=0;
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]=='R' && s[i+1]=='L'){
                s[i]='S';
                s[i+1]='S';
                ans+=2;
            }                        
        }
        int le=0,ri=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R')ri++;
            else{
                ans+=ri;
                ri=0;
            }
        }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='L')le++;
            else{
                ans+=le;
                le=0;
            }
        }
        
        
        return ans;
    }
};