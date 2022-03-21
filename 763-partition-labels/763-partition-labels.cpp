class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> pos(26, 0);
        int n=s.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            pos[s[i]-'a'] = i;
        }
        
        int maxi = -1, last = 0;
        for(int i = 0; i < n; i++){
            maxi = max(maxi, pos[s[i]-'a']);
            if(i == maxi) {
                ans.push_back(maxi - last + 1);
                last = i+1;
            }
        }
        return ans;
    }
};