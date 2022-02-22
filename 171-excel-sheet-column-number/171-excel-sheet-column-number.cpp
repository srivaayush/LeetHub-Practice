class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0,p=1;int n=columnTitle.size();n--;
        for(int i=n;i>=0;i--){
            ans+=((columnTitle[i]-'A')+1)*p;
            if(i>0)p*=26;            
        }
        return ans;
    }
};