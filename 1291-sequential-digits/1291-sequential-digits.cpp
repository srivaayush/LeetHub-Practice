class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string digits = "123456789";
        
        vector<int> ans;
        for (int l = 1; l <= 9; l++) {
            for (int i = 0; i + l <= 9; i++) {
                string sub = digits.substr(i, l);
                int value = stoi(sub);
                
                if (value >= low && value <= high) {
                    ans.push_back(value);
                }
            }
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }
};