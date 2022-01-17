class Solution {
private:
    void splitString(string s, vector<string> &v)
    {
        string temp = "";
        for(int i=0;i<s.length();++i){

            if(s[i]==' '){
                v.push_back(temp);
                temp = "";
            }
            else{
                temp.push_back(s[i]);
            }

        }
        v.push_back(temp);
	}
public:
    bool wordPattern(string pat, string s) {
        map<char,string> m;
        int n=pat.size();
        int j=0;
        
        
        vector<string> v;
        splitString(s,v);
        int l=v.size();
        
        if (l!=n)return false;
        for(int i=0;i<n;i++)
        {
            if(m[pat[i]]!="" && m[pat[i]]!=v[i])
                return false;
            m[pat[i]]=v[i];
        }
        map<string,char> m1;
        for(int i=0;i<n;i++)
        {
            if(m1[v[i]]!= '\0' && m1[v[i]]!=pat[i])
                return false;
            m1[v[i]]=pat[i];
        }
        return true;
        
        
        // return s==newPat;
    }
};