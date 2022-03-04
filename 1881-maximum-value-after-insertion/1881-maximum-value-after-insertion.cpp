class Solution {
public:
    string maxValue(string num, int x) {
        int n=num.size();
        string ans="";
        if(num[0]=='-'){
            bool flag=0;
            for(int i=1;i<n;i++){
                if((num[i]-'0')>x && !flag){
                    ans+=(x+'0');
                    flag=true;                        
                }
                ans+=num[i];
            }
            if(!flag)
                ans+=(x+'0');
            ans='-'+ans;
        }
        else{
            bool flag=0;
            for(int i=0;i<n;i++){
                if((num[i]-'0')<x && !flag){
                    ans+=(x+'0');
                    flag=true;                        
                }
                ans+=num[i];
            }
            if(!flag)
                ans+=(x+'0');
        }
        return ans;
    }
};