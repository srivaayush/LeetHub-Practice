class Solution {
public:
    int scoreOfParentheses(string s) {
        int d = 0, ans = 0;
        char prev = '(';
        
        for (auto &ch: s) {
            if (ch == '(')
                d++;
            else {
                d--;
                if (prev == '(')
                    ans += pow(2, d);
            }
            
            prev = ch;
        }
        
        return ans;
    }
};