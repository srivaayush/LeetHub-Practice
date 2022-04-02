class Solution {
private:
    bool isPal(int l,int r, string &s){
        while(l<r){
            if(s[l]!=s[r])return false;
            l++;r--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int n=s.size();
        int l=0,r=n-1;
        while(l<r){
            if(s[l]!=s[r]){
                return (isPal(l+1,r,s) || isPal(l,r-1,s));
            }else{
                l++;
                r--;
            }
        }
        return true;
    }
};