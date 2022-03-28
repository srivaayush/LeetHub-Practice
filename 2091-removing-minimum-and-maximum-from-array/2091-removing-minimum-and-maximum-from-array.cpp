class Solution {
public:
    int minimumDeletions(vector<int>& nums) {        
        vector<pair<int,int>> vp;
        int n=nums.size();
        if(n==1)return 1;
        // for(int i=0;i<n;i++)
        //     vp.push_back(make_pair(nums[i],i));
        // sort(vp.begin(),vp.end());
        // int a=vp[0].second,b=vp[n-1].second;
        
        int a = max_element(nums.begin(),nums.end()) - nums.begin();
        int b = min_element(nums.begin(),nums.end()) - nums.begin();
        
        // int mn1=a,mn2=b;
        
        // cout<<a<<"  "<<b;
        if(a>b)swap(a,b);
        vector<int> pos={ a + 1 + n - b, b + 1, n - a};
return *min_element(pos.begin(),pos.end());
        
    }
};