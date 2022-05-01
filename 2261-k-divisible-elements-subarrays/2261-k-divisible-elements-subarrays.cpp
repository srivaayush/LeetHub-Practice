class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        
        int c=0;
        int n=nums.size();
        long long ans=0;
        for(int i=1;i<=n;i++){
            set<vector<int>> mp;
            for(int j=0;j<n-i+1;j++){
                int ms=0;
                vector<int> temp(i);
                bool f=true;
                int c=0;
                for(int s=j;s<j+i;s++)
                {
                    // temp.push_back(nums[s]);
                    temp[c++]=nums[s] ;
                    if(nums[s]%p==0){
                        ms++;
                    }
                    if(ms>k){
                        f=false;
                        break;                        
                    }
                }
                if(f && mp.find(temp)==mp.end())
                mp.insert(temp);                                        
            }
            ans+=mp.size();
        }
        return ans;
    }
};