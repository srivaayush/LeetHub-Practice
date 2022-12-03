class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;    
        priority_queue<pair<int,char>> pq;
        for(auto &x: s)
            freq[x]++;
        for(auto &x: freq)
            pq.push({x.second,x.first});
        s="";   
        while(!pq.empty()){
            s+=string(pq.top().first,pq.top().second);
            pq.pop();
        }
        return s;
    }
};