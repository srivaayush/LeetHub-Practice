class Solution {
private:
    void printStack(stack<int> st){
        while(!st.empty()){
            cout<<st.top()<<"  ";
            st.pop();
        }
        cout<<endl;
    }
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for(auto &x:ops){
            if(x=="C"){
                st.pop();
                // printStack(st);                
            }
            else if(x=="D"){
                int tp=st.top();
                st.push(tp*2);
                // printStack(st);
            }
            else if(x=="+"){
                int tp1=st.top();
                st.pop();
                int tp2=st.top();
                st.pop();
                st.push(tp2);
                st.push(tp1);
                st.push(tp1+tp2);
                // printStack(st);
                
            }
            else {
                st.push(stoi(x));
                // printStack(st);                
            }
        }
        int ans=0;
        while(!st.empty()){
            // cout<<st.top()<<"  ";
            ans+=st.top();
            st.pop();
        }
        return ans;        
    }
};