class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n=nums1.size();
        map<int,int> m1;
        map<int,int> m2;
        
        for(auto &x:nums1){
            for(auto &y:nums2){
                m1[x+y]++;
            }
        }
        int ans=0;
        for(auto &x:nums3){
            for(auto &y:nums4){
                int req=-y-x;
                auto it=m1.find(req);
                if(it!=m1.end())
                    ans += it->second;
            }
        }
        
        
        return ans;
    }
};