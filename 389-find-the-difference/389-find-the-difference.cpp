class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> count(26,0);
        for(auto &x:s){
            count[x-'a']++;
        }
        for(auto &x:t){
            count[x-'a']--;
            if(count[x-'a']<0)return x;
        }
        return 'a';
    }
};