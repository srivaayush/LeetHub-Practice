class Solution {
public:
    bool backspaceCompare(string s, string t) {
        if(s==t)return 1;
        string s1="",t1="";
        for(auto &x:s){
            if(x=='#'){
                if(s1!="")
                    s1.pop_back();
            }                
            else s1.push_back(x);
        }
        for(auto &x:t){
            if(x=='#'){
                if(t1!="")
                    t1.pop_back();
            }                
            else t1.push_back(x);
        }
        // cout<<s1<<"   "<<t1;
        return (s1==t1);
    }
};