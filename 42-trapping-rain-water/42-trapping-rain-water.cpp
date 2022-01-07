class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        
        vector<int>mbl(n);
        vector<int>mbr(n);
        mbl.push_back(height[0]);
        mbr.push_back(height[0]);
        for (int i = 1; i < n; ++i) 
            mbl[i] = max(height[i-1], mbl[i-1]);
        for (int i = n-2; i >= 0; --i) 
            mbr[i] = max(height[i+1], mbr[i+1]);
        
        
        for(int i=1;i<n-1;i++)
        {
            int p=min(mbl[i],mbr[i])-height[i];
            if(p>0)ans+=p;
            // cout<<p<<"   ";
        }
        return ans;
        
    }
};