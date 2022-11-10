class Solution {
public:
    string removeDuplicates(string S) {
        string res = "";
        for (auto &x:S){
            if (res.size() && x== res.back())
                res.pop_back();
            else
                res.push_back(x);
        }            
        return res;
    }
};
