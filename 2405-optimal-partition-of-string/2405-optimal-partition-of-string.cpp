class Solution {
public:
    int partitionString(string s) {
        set<char>st;
        int c=0;
        for(auto &x:s){
            if(st.find(x)!=st.end()){
                c++;
                st.clear();
            }
            st.insert(x);
        }
        return c+1;
    }
};