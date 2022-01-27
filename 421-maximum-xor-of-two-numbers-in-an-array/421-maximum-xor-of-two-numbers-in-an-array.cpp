class Solution {
private:
    int removeRepeated(vector<int> &nums){
        int n=nums.size();
        if (n==0 || n==1)
        return n;
        int j = 0;
        for (int i=0; i < n-1; i++)
            if (nums[i] != nums[i+1])
                nums[j++] = nums[i];

        nums[j++] = nums[n-1];
        return j;
    }
public:
    int findMaximumXOR(vector<int>& nums) {
        int res = 0, mask = 0;
        for (int i = 31, mask = 0; i >= 0; --i) {
            mask |= (1 << i);
            set<int> s;
            for (auto &x : nums)  s.insert(x & mask);            
            int t = res | (1 << i);
            for (int prefix : s) 
                if (s.count(t ^ prefix)) {
                    res = t;
                    break;
                }            
        }
        return res;
    }
};