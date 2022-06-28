class Solution {
public:
    int minDeletions(string s) {
        vector<int> ct(26);
        for (auto &x:s)
            ct[x-'a'] ++;
        sort(ct.begin(), ct.end(), greater<int>());
        int res = 0;
        for (int i = 1; i < ct.size(); i++)
        {
            if (ct[i-1] <= 1)
            {
                res += ct[i];
                ct[i] = 0;
            }
            else if (ct[i-1] <= ct[i])
            {
                res = res + ct[i] - ct[i-1] + 1;
                ct[i] = ct[i-1] -1;
            }
        }
        return res;
    }
};