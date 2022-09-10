class Solution {
private:
    bool numIsDigit(string &s){
        if(s=="-")
            return 0;
        for(auto &x:s){
            if(x=='-')
                continue;
            if(!isdigit(x))
                return false;
        }
        return true;
    }
public:
    int evalRPN(vector<string>& s) {
        stack<int> st;
        for(auto &x:s){
            if(numIsDigit(x)){
                st.push(stoi(x));
            }
            else{
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                
                int c=0;
                if(x=="+"){
                    c=a+b;
                }
                else if(x=="*"){
                    c=b*a;
                }
                else if(x=="-"){
                    c=b-a;
                }
                else{
                    c=b/a;
                }
                st.push(c);
            }
            // cout<<st.top()<<endl;
        }
        return st.top();
    }
};