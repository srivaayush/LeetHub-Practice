class ATM {
public:
    typedef long long ll;
    vector<ll> a;
    ATM() {
        a.resize(5,0);
    }
    
    void deposit(vector<int> bC) {
        for(int i=0;i<5;i++){
            a[i]+=bC[i];
        }
    }
    
    vector<int> withdraw(int amnt) {
        vector<ll> ans(5,0);
        int c=0;
        vector<ll> tem={20,50,100,200,500};
        
        
        for(int i=4;i>=0;i--){
            // cout<<a[i]<<"  ";
            ll k=amnt/(tem[i]);
            if(k==0 ||a[i]==0 )continue;
            else if(k>=a[i]){
                ans[i]=a[i];
                amnt=amnt-(a[i]*tem[i]);
                if(amnt==0){
                    break;
                } 
            }
            else if(k<a[i]){
                ans[i]=k;
                amnt=amnt-(k*tem[i]);
                if(amnt==0){
                    break;
                }      
            }           
            
            
        }
        if(amnt!=0)return {-1};
        for(int i=0;i<5;i++){
            a[i]=a[i]-ans[i];            
        }
        
        vector<int> res(5,0);
        for(int i=0;i<5;i++)
            res[i]=ans[i];
        return res;
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */