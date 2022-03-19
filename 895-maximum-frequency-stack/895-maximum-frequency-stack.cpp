class FreqStack {
public:
    map<int, int> mp;
    map<int, stack<int>> maxst;
    int maxf=0;
    FreqStack() {
        
    }
    
    void push(int x) {
        mp[x]++;
        maxf = max(maxf, mp[x]);
        maxst[mp[x]].push(x);
    }
    
    int pop() {
        if(maxf<0) return -1;
        int top = maxst[maxf].top();
        maxst[maxf].pop();
        mp[top]--;
        if(maxst[maxf].size()==0) {
            maxst.erase(maxf);
            maxf--;
        }
        return top;
    }
};
/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */