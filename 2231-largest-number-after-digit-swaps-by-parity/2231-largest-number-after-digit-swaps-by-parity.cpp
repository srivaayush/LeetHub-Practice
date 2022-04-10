class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        string e="",o="";
        while(num>0){
            int d=num%10;
            num=num/10;
            if(d%2==0)
                e.push_back(d+'0');
            else 
                o.push_back(d+'0');
        }
        sort(e.rbegin(),e.rend());
        sort(o.rbegin(),o.rend());
        
        int s1=0,s2=0;
        for(int i=0;i<s.size();i++){
            if((s[i]-'0')%2==0){
                s[i]=e[s1];s1++;
            }
            else{
                s[i]=o[s2];s2++;
            }
        }
        return stoll(s);
    }
};