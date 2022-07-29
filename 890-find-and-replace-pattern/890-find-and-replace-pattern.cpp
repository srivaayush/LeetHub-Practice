class Solution {
private:
    vector<int> createPattern(string s){
        map<char,int> mp;
        int l=s.size();
        for(int i=0;i<l;i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=i;
            }
        }
        vector<int> v;
        for(auto &x:s){
            v.push_back(mp[x]);
        }
        return v;
    }
public:
    vector<string> findAndReplacePattern(vector<string>& w, string pat) {
        vector<int> mp=createPattern(pat);
        vector<string> ans;
        for(auto &x:w){
            vector<int> m1=createPattern(x);
            if(mp==m1)ans.push_back(x);
        }
        return ans;
    }
};