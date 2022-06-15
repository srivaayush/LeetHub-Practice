class Solution
{
    // private:
    public: 
    static bool compare(string &a, string &b)
    {
        if (a.size() < b.size()) return true;
        else if (a.size() == b.size()) return a < b;
        return false;
    }
    int longestStrChain(vector<string> &words)
    {
        sort(words.begin(), words.end(), compare);
        unordered_map<string, int> mp;
        for (auto &i: words)
        {
            mp[i] = 1;
        }
        int ans = 1;
        for (int i = 0; i < words.size(); i++)
        {
            int len = words[i].size();
            for (int j = 0; j < len; j++)
            {
                string str = words[i];
                str.erase(j, 1);
                if (mp.find(str) != mp.end())
                {
                    mp[words[i]] = max(mp[words[i]], mp[str] + 1);
                    ans = max(ans, mp[words[i]]);
                }
            }
        }
        return ans;
    }
};