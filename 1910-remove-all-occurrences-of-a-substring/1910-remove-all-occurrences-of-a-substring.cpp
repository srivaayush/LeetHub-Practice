class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n1=s.size();
        int n2=part.size();
        int i=0;string ans="";
        
        // s=s.substr(i+n2);
        
        // cout<<s<<endl;
        while(i<n1-n2+1){
            string st=s.substr(i,n2);
            if(st==part){
                string s2=s.substr(i+n2);
                s=ans+s2;
                // cout<<s<<endl;
                return removeOccurrences(s,part);
            }
            else
                ans.push_back(s[i]);
            i++;                
        }
        
        return s;
    }
};