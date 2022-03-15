class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;int i=0;
      for (auto &x:s) {
        if (x == '(') st.push(i);
        if (x == ')') {
          if (!st.empty()) st.pop();
          else x = '*';
        }
          i++;
      }
      while (!st.empty()) {
        s[st.top()] = '*';
        st.pop();
      }
      s.erase(remove(s.begin(), s.end(), '*'), s.end());
      return s;
    }
};