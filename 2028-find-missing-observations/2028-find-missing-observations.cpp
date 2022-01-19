class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int sum=0;
        sum=accumulate(rolls.begin(),rolls.end(),0);
        int req=(m+n)*mean;        
        req=req-sum;
        if(req> (6*n) || req<n)return {};
        
        
        vector<int> ans(n,req/n);
        req=req-((req/n)*n);
        cout<<req;        
        int a=0;
        while(req >0){            
            if(ans[a]==6)
                a++;
            else{
                ans[a]++;
                req--;
            }
        }
        return ans;
        
       
        // for(int i=0;i<n;i++)
        // {
        //     int 
        // }
        
    }
};