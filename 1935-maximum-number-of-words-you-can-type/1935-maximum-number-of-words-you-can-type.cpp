class Solution {
public:
    int canBeTypedWords(string text, string bl) {
        set<char>s;
        for(auto &x: bl){
            s.insert(x);
        }
        int c=0,k=0;
        text.push_back(' ');
        for(auto &x: text){
            if(x==' ' ){
                if(k==0)c++;
                k=0;
            }
            else{
                if(s.find(x)!=s.end()){
                    k=1;
                }
            }
        }
        return c;
    }
};