class Solution {
public:
    int calculate(string s) {
        int ans = 0;
        int n = s.size();
        stack<int>st;
        int sign = 1;
        
        for(int i=0; i<n; i++){
            if(isdigit(s[i])){
                int val = 0;
                while(isdigit(s[i])){
                    val = val*10 + (s[i]-'0');
                    i++;
                }       
                i--;
                val = sign*val;
                ans = ans + val;
                sign = 1;
            }
            else if(s[i] == '('){
                st.push(ans);
                st.push(sign);
                ans = 0;
                sign=1;
            }
            else if(s[i] == ')'){
                ans = ans*st.top();
                st.pop();
                ans = ans + st.top();
                st.pop();
            }
            else if(s[i] == '-'){
                sign = -1;
            }
        }
        return ans;
    }
};