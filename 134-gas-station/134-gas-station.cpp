class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        vector<int> nett(n,0);
        for(int i=0;i<n;i++){
            nett[i]=gas[i]-cost[i];
        }
        
        int sg=accumulate(gas.begin(),gas.end(),0);
        int sc=accumulate(cost.begin(),cost.end(),0);
        if(sc>sg)return -1;
        //optimised
        int s=0,start=0;
        for(int i=0;i<n;i++)
        {
            s+=nett[i];
            if(s<0){
                s=0;
                start=(i+1)%n;
            }            
        }
        
        return start;
        
        
        
        
        //brute force
        // for(int i=0;i<n;i++)
        // {
        //     if((gas[i]-cost[i])>=0)
        //     {
        //         int s=0;
        //         for(int j=i;j<n;j++){
        //             s+=(gas[j]-cost[j]);
        //             if(s<0)
        //                 break;
        //         }
        //         if(s<0)
        //             continue;
        //         for(int j=0;j<i;j++){
        //             s+=(gas[j]-cost[j]);
        //             if(s<0)
        //                 break;
        //         }
        //         if(s>=0){
        //             return i;
        //         }
        //     }
        // }
        // return -1;     
    }
};