class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long res=0;
        int LastMinK=-1, LastMaxK=-1, LastInvalid=-1, n=nums.size();
        
        for (int i=0; i<n; ++i) {
            
            if (nums[i]==minK) LastMinK=i;
            if (nums[i]==maxK) LastMaxK=i;
            if (nums[i]<minK || nums[i]>maxK) LastInvalid=i;
            
            int LastValid=min(LastMinK, LastMaxK);
            if (LastInvalid<LastValid)
                res+=LastValid-LastInvalid;
        }
            
        return res;
    }
};