class Bitset {
private:
    vector<int>v;
    bool isFlip;
    int cnt1;
public:
    Bitset(int size) {
        v.resize(size);
        cnt1=0;
        isFlip=false;
    }
    
    void fix(int idx) {
        if(!isFlip ){
            if(v[idx]==0)
                cnt1++;
            v[idx]=1;
        }
        else{
            if(v[idx]==1)cnt1++;
            v[idx]=0;
        }
    }
    
    void unfix(int idx) {
        if(!isFlip ){
            if(v[idx]==1){
                cnt1--;
                v[idx]=0;
            }
                
        }
        else{
            if(v[idx]==0){
                cnt1--;
                v[idx]=1;
            }
        }
    }
    
    void flip() {
        isFlip=!isFlip;
        cnt1=v.size()-cnt1;        
    }
    
    bool one() {
        return cnt1>0;
    }
    
    bool all() {
        return cnt1==v.size();
    }
    
    int count() {
        return cnt1;
    }
    
    string toString() {
        string ans="";
        if(isFlip){
            for(auto &x:v){
                if(x==0)
                    ans.push_back('1');
                else
                    ans.push_back('0');
            }
        }
        else{
            for(auto &x:v)
                ans.push_back(x+'0');
        }
        return ans;
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */