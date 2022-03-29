class Solution {
public:
    vector<string> alertNames(vector<string>& kn, vector<string>& kt) {
        map<string,vector<int>>mp;
        vector<string>ans;
        int n=kn.size();
        for(int i=0;i<n;i++){
            //store the times
            mp[kn[i]].push_back(stoi(kt[i].substr(0, 2)) * 60 + stoi(kt[i].substr(3)));
        }
        for(auto &x:mp){
            sort(x.second.begin(),x.second.end());
            int j=0;
            for (int i = 0; i < x.second.size(); i++) {
                while(x.second[i] - x.second[j] > 60)
                    j++;
                if ((i-j)>= 2) {
                    ans.push_back(x.first);
                    break;
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};