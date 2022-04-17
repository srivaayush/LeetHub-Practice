class Solution {
public:
    string digitSum(string s, int k) {
        int n=s.size();
        while(n>k){
            int tem=0;
            string st="",str="";
            for(int i=0;i<n;i++){
                tem+=(s[i]-'0');
                if((i+1)%k==0){
                    str+=to_string(tem);
                    tem=0;
                }                    
            }
            if(n%k!=0)
                str+=to_string(tem);
            s=str;
            n=s.size();
        }
        return s;
    }
};