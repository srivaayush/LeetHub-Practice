class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> keep(10001,0);
        int maxi=INT_MIN;
        sort(nums.begin(),nums.end());
        for(auto &x:nums){
            keep[x]++;
            // maxi=max(maxi,x);
        }        
        int ans=0;
        for(int i=2;i<10001;i++){
            // if( ((keep[i-1]*(i-1))+(keep[i+1]*(i+1))) <=(keep[i]*i) ){
            //     keep[i-1]=0;keep[i+1]=0;
            //     cout<<i<<endl;
            //     ans+= (keep[i]*i) ;      
            //     keep[i]=0;
            // } 
            keep[i]=max(keep[i-1], (i*keep[i])+keep[i-2]);
            ans=max(ans,keep[i]);
        }
        return ans;
               
              
    }
};

