class Solution {
public:
    int countPairs(vector<int>& del) {
        int modi=1000000007;
        int n = del.size();
        if (n == 1) {return 0;}
        map<int, int> cnt;
        int ans = 0;
        
        sort(del.begin(), del.end());
        cnt[del[0]]++;
        
        for (int i = 1; i < n; i++) {
            for (int p = 0; p <= 21; p++) 
            {
                int powi=(int)pow(2, p);
                if (powi > 2 * del[i]) 
                    break;
                
                int target = powi - del[i];
                
                if (cnt.find(target) != cnt.end())                 
                    ans += cnt[target] % modi;
                
                ans %= modi;
            }
            cnt[del[i]]++;
        }
        
        return ans%modi;
    }
};