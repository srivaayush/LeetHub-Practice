class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        vector<int> cnt(26,0)  , visited(26,0);
        
        string ans = "";
        
        for(auto &x:s)
            cnt[x - 'a']++;
        
        for(auto &x:s)
        {            
            cnt[x - 'a']--;                        
            if(!visited[x- 'a'])
            {
                
                while(ans.size() > 0 && ans.back() > x && cnt[ans.back() - 'a'] > 0)
                {                    
                    visited[ans.back() - 'a'] = 0;
                    ans.pop_back();
                }
                
                ans += x;
                visited[x - 'a'] = 1;
            }
        }
        return ans;
    }
};