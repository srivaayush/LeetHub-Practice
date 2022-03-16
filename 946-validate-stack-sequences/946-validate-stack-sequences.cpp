class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int j=0;
        stack<int>st;
        for(auto &x:pushed){
            st.push(x);
            while(!st.empty() && popped[j]==st.top()){
                st.pop();
                j++;
            }
        }
        if(j==popped.size())
            return !false;
        return !true;
    }
};