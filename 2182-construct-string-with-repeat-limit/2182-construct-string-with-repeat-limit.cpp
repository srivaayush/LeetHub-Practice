class Solution {
public:
    string repeatLimitedString(string s, int rL) {
        vector<int> cnt(26,0);
        
        for(auto &x:s)
            cnt[x-'a']++;
        
        int used=0;bool flag=false;
        string ans="";
        int nexti=0;
        for(int i=25;i>=0;i--){
            int j=0;
            int p;
            if(flag==false){
                int c=cnt[i];
                for(;j<c &&j<rL;j++){
                    ans.push_back(i+'a');
                    cnt[i]--;
                }
            }
            else{ 
                p=cnt[i];
                if(p>0){
                    ans.push_back(i+'a');
                    cnt[i]--; 
                }
                               
            }
            
            if(flag==true && p!=0){
                i=nexti;p=0;
                flag=false;
            }
            else if(cnt[i]!=0){
                nexti=i+1;
                flag=true;
            }
            
        }
        return ans;
    }
};