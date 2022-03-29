class Solution {
public:
    string replaceDigits(string s) {
        char prev=s[0];
        int n=s.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                prev=s[i];
            }
            else{
                prev=(prev+(s[i]-'0'));
                // cout<<pr
                s[i]=prev;
            }
        }
        return s;
    }
};