class Solution {
    int expand_from_middle (string s, int left, int right){
        int palin = 0;
        while(left>=0 && right < s.length() && s[left] == s[right]){
            palin++;
            left--;
            right++;
        }
        return palin;
    }

public:
    int countSubstrings(string s) {
        int n=s.size();
        int i=0;
        int num_of_palindromes = 0;
        while(i<n){
            int n1 = expand_from_middle(s, i, i);
            int n2 = expand_from_middle(s, i, i+1);
            num_of_palindromes += n1+n2;
            i++;
        }
        return num_of_palindromes;
    }
};