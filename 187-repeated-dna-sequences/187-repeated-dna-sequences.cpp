class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        map<string,int> fill;
        int n=s.size();
        if(n<=10) 
            return {};       
        string str="";
        str=s.substr(0,10);
        // cout<<str;
        reverse(str.begin(),str.end());
        // CCCCCAAAAA
        // fill.insert(str);
        fill[str]=1;
        for(int i=10;i<n;i++){
            str.pop_back();
            str=s[i]+str;
            fill[str]++;                                           
        }
        for(auto &x:fill){
            string st1=x.first;
            reverse(st1.begin(),st1.end());
            if(x.second>1)
                ans.push_back(st1);
        }
        return ans;
    }
};