class Solution {
public:
    vector<int> arrayChange(vector<int>& a, vector<vector<int>>& op) {
        // map<int,int> m;        
        // for(auto &x:op){
        //     m[x[0]]=x[1];
        // }
        map<int,vector<int>> m1;
        for(int i=0;i<a.size();i++){
            m1[a[i]].push_back(i);
        }
        for(auto &x:op){
            vector<int> v=m1[x[0]];
            for(int i=0;i<v.size();i++){
                m1[x[1]].push_back(v[i]);
            }
            m1.erase(x[0]);
        }
        for(auto &x:m1){
            vector<int> v=x.second;
            for(auto &y:v){
                a[y]=x.first;
            }
        }
        return a;
    }
    
};