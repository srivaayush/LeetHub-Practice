class Solution {
public:
    int minCostSetTime(int sa, int mc, int pc, int ts) {
        int mnMin=ts/60,mnSec=ts%60;
        int mnMin1=ts/60,mnSec1=ts%60;
        if(mnSec1<40 && mnMin1!=0){
            mnSec1=mnSec+60;
            mnMin1--;
        }
        string s1="",s2="";
        s1=to_string(mnMin*100+mnSec);
        s2=to_string(mnMin1*100+mnSec1);
        int a1=0,a2=0,t=sa,c0=0;
        for(auto &x:s1){
            if(sa==x-'0'){
                a1+=pc;
            }
            else{
                a1+=pc+mc;
                sa=x-'0';
            }
        }
        sa=t;t=sa;
        c0=0;
        for(auto &x:s2){       
            if(sa==(x-'0')){
                a2+=pc;
            }
            else{
                a2+=pc+mc;
                sa=x-'0';
            }
        }
        if(mnMin==100)
            return a2;
        return min(a1,a2);
        
    }
};