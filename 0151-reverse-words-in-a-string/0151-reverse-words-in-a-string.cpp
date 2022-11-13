class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n=s.size();
        for(int i = 0; i<n; i++) {
            if(s[i] == ' ')
                continue;

            string t;

            while(i < n && s[i] != ' ')
                t += s[i++];
            
            if(ans.size()==0)
                ans = t;
            else 
                ans = t + ' ' + ans;
        }
        
        return ans;
    }
};