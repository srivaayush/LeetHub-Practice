class Solution {
    typedef long long ll;
private:
    ll sum(string s){
        string st="";
        string ab,bc;
        bool flag=false;
        for(auto &x:s){
            if(x=='+'){
                flag=true;
                continue;
            }
            if(!flag ){
                ab.push_back(x);
            }
            else{
                bc.push_back(x);
            }
        }
        return stoll(ab)+stoll(bc);
    }
public:
    string minimizeResult(string exp) {
        ll n=exp.size();
        ll ans=LLONG_MAX; string res="",temp="";
        ans=sum(exp);
        res="("+exp+")";
        string st="",en="";
        
        for(int i=-1;i<n;i++){
            if(i!=-1)
            st.push_back(exp[i]);
            
            if(exp[i+1]=='+')break;
            en="";
            for(int j=n;j>=0;j--){
                if(exp[j-1]=='+')break;
                if(j!=n)
                en=exp[j]+en;
                string cut="";
                for(int k=i+1;k<j;k++){
                    cut.push_back(exp[k]);
                }
                // cout<<st<<" "<<cut<<" "<<en<<endl;
                ll sm=sum(cut);
                ll a=1,b=1;
                if(st!="")a=stoll(st);
                if(en!="")b=stoll(en);
                if((sm*a*b)<ans){
                    res=st+"("+cut+")"+en;
                    ans=(sm*a*b);
                }
                
            }
        }
        
        return res;
    }
};