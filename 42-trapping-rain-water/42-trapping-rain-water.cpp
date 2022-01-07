class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        for(int i=1;i<n-1;i++)
        {
            int mbl=INT_MIN,mbr=INT_MIN;
            for(int j=i-1;j>=0;j--)
                mbl=max(mbl,height[j]);
            for(int j=i+1;j<n;j++)
            {                
                mbr=max(mbr,height[j]);
                if(mbr>=mbl)
                    break;
            }    
            
                
            int p=min(mbl,mbr)-height[i];
            if(p>0)ans+=p;
            // cout<<p<<"   ";
        }
        return ans;
        
    }
};