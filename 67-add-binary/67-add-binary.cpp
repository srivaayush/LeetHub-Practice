class Solution {
public:
    string addBinary(string a, string b) {
        int c=0,p1=0,p2=0;
        int l1=a.size();
        int l2=b.size();
        string ans="";
        for(int i=0;i<max(l2,l1);i++)
        {
            if(i>=l2)
            {
                p1=a[l1-1-i]-'0';
                p2=0;
            }
            else if(i>=l1)
            {
                p2=b[l2-1-i]-'0';
                p1=0;
            }
            else
            {
                p2=b[l2-1-i]-'0';
                p1=a[l1-1-i]-'0';
            }
            int a=p1+p2+c;
            if(a>1)
                c=1;
            else
                c=0;
            // cout<<a<<" ";
            // ans=to_string((a%2))+ans;
            ans.push_back((a%2)+'0');
                
        }
        reverse(ans.begin(),ans.end());
        if(c!=0)
            ans='1'+ans;
        
        return ans;
    }
};