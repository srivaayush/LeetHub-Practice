class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=-1;
        if(s=="")return true;
        if(t=="")return false;
        for(auto &x:t){
            if(x==s[j+1])j++;
            if(j==s.size()-1)return true;
        }
        // if(j==s.size()-1)return true;
        return false;
    }
};