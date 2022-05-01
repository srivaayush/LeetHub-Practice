class Solution {
public:
    string removeDigit(string s, char d) {
        priority_queue<string> pq;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==d){
                string s1=s.substr(0,i);
                string s2=s.substr(i+1);
                pq.push((s1+s2));
            }            
        }
        if(pq.empty()){
            pq.push(s);
        }
        return pq.top();
    }
};