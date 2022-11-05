class Solution {
public:
    bool halvesAreAlike(string s) {
        int c1=0,c2=0;
        transform(s.begin(),s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.size()/2;i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
                c1++;
        }
        for(int i=s.size()/2;i<s.size();i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
                c2++;
        }
        return c1==c2;
    }
};