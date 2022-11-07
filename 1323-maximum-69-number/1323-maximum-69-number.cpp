class Solution {
public:
    int maximum69Number (int n) {
        string s=to_string(n);
        for(auto &x:s){
            if(x=='6'){
                x='9';
                break;
            }
        }
        n=stoi(s);
        return n;
    }
};