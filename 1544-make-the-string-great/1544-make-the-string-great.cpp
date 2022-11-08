class Solution {
public:
    string makeGood(string s) {
        bool f=1;
        while(f){
            int n=s.size();
            string ans="";
            f=false;
            for(int i=0;i<n;i++){
                if(i<n-1 && ( (s[i]==s[i+1]+32) || (s[i]+32==s[i+1])) ){
                    i++;
                    f=true;
                }
                else{
                    ans+=s[i];
                }
            }
            s=ans;
        }
        
        return s;
    }
};