class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        long long sum=0;
        
        // Smallest and second smallest number with num%3=1
        int m1=INT_MAX,m12=INT_MAX;
        
        // Smallest and second smallest number with num%3=2
        int m2=INT_MAX,m22=INT_MAX;
        
        for(auto &x:nums){
            sum+=x;
            if(x%3==1){
                if(m1!=INT_MAX){
                    if(m12==INT_MAX){
                        m12=max(m1,x);
                        m1=min(m1,x);
                    }
                    else if(x<=m1)
                        m12=m1;
                }
                m1=min(m1,x);
            }
            else if(x%3==2){
                if(m2!=INT_MAX){
                    if(m22==INT_MAX){
                        m22=max(m2,x);
                        m2=min(m2,x);
                    }
                    else if(x<=m2)
                        m22=m2;                    
                }
                m2=min(m2,x);
            }
        }
        
        if(sum%3==0)return sum;
        
        int chng=0;
        
        
        if(sum%3==1){
            if(m2==INT_MAX||m22==INT_MAX)chng=m1;
            else if(m1==INT_MAX)chng=m2+m22;
            else chng=min((m2+m22),m1);
        }
        
        else{
            if(m1==INT_MAX||m12==INT_MAX)chng=m2;
            else if(m2==INT_MAX)chng=m1+m12;
            else chng=min((m1+m12),m2);
        }
        return sum-chng;
    }
};