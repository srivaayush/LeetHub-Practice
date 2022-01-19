class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int sum=0;
        sum=accumulate(rolls.begin(),rolls.end(),0);
        int req=(m+n)*mean;        
        req=req-sum;
        if(req> (6*n) || req<n)return {};
        for(int i=0;i<n;i++)
        {
            if(i>=m){
                rolls.push_back(req/n);
            }
            else
                rolls[i]=req/n;
        }
        
        
        req=req-((req/n)*n);
        int a=0;
        while(req >0){            
            if(rolls[a]==6)
                a++;
            else{
                rolls[a]++;
                req--;
            }
        }
        
        rolls.resize(n,0);
        return rolls;
    }
};