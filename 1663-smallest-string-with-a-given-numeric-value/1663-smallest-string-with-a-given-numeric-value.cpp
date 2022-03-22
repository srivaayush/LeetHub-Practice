class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans(n,'a');
        string res="";
        int p=n;
        for(int i=p-1;i>=0;i--){
            if(k-i>=26){
                ans[i]=(25+'a');
                // res+=(char)(25+'a');
                k=k-26;
            }
            else{
                ans[i]=(k-i-1+'a');
                // res+=(char)(k-i-1+'a');
                k=k-k+i;
                if(k==(i+1))break;
            }
        }
        // reverse(res.begin(),res.end());
        // return res;
        return ans;
    }
};