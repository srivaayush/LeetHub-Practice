class Solution {
    typedef long long ll;
public:
    long long maximumSubsequenceCount(string s1, string pat) {
        string s=pat[0]+s1;
        ll ans=0,n=s.size();
        ll le=0,ri=n-1;
        queue<int> p1;
        queue<int> p2;
        string temp="";
        for(int i=0;i<n;i++){
            if(s[i]==pat[0]){
                temp+=s[i];
                p1.push(i);
            }
            if(s[i]==pat[1]){
                temp+=s[i];
                p2.push(i);            
            }

        }
        // s=temp;
        while(p1.empty()==false && p2.empty()==false){
            while(p1.empty()==false && p2.empty()==false && p1.front()<p2.front()){
                ans+=p2.size();
                p1.pop();                
            }
            while(p1.empty()==false && p2.empty()==false && p1.front()>=p2.front()){
                // ans+=p2.size();
                p2.pop();                
            }            
            
        }
        ll ans1=0;
        
        s=s1+pat[1];
        n=s.size();
        queue<int> p11;
        queue<int> p22;
        for(int i=0;i<n;i++){
            if(s[i]==pat[0])p11.push(i);
            else if(s[i]==pat[1])p22.push(i);            
        }
        
        while(p11.empty()==false && p22.empty()==false){
            while(p11.empty()==false && p22.empty()==false && p11.front()<p22.front()){
                ans1+=p22.size();
                p11.pop();                
            }
            while(p11.empty()==false && p22.empty()==false && p11.front()>p22.front()){
                // ans+=p2.size();
                p22.pop();                
            }            
            
        }
        
        return max(ans1,ans);
        
        
        
    }
};