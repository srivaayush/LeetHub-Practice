class Solution {
public:
    string capitalizeTitle(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n=s.size();
        s=" "+s+" ";
        // s.tolower();
        for(int i=0;i<=n;i++)
        {
            if(s[i]==' ')
            {
                if(s[i+3]==' '||s[i+2]==' ')
                    continue;
                s[i+1]=s[i+1]-32;
                
            }
        }
        string ans="";
        for(int i=1;i<=n;i++)
            ans.push_back(s[i]);
        
        return ans;
    }
};