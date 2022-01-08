class Solution {
public:
    int longestPalindrome(vector<string>& a) {
        int n=a.size();
        map<string,int> m;
        for(auto &x:a){
            m[x]++;
        }
        int ans=0,p=0;
        for(auto &x:m){
            string str=x.first;
            reverse(str.begin(), str.end());               
            if(x.first==str)
            { 
                if(x.second%2!=0)
                {
                    p=1;
                    x.second--;
                }    
                ans+=(x.second*2);
                
            }
            else
                ans+=2*min(x.second,m[str]);  
        }
        return ans+p*2;
        
    }
};