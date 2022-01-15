class Solution {
public:
    string makeFancyString(string s) {
        int n=s.size();int ans=0;
        int j = 2;
        for (int i = 2; i < n; i++)
            if (s[i] != s[j-1] || s[i] != s[j-2])
                s[j++] = s[i];
        s=s.substr(0,j);
        return s;
    }
};