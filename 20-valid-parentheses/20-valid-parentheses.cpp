class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int l=s.length();
        for(int i=0;i<l;i++){
            char ch=s[i];
            if(ch=='{'||ch=='('||ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty())
                    return false;
                char chr=st.top();
                st.pop();
                if((chr=='{'&& ch!='}')||(chr=='('&& ch!=')')||(chr=='['&& ch!=']'))
                    return false;
            }
        }
        return(st.empty());
            
    }
};