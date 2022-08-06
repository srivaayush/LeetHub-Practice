class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& i1, vector<vector<int>>& i2) {
        vector<vector<int>> v;
        set<int>s;
        int n1=i1.size();
        int n2=i2.size();
        for(int i=0;i<n1;i++){
            int w=i1[i][0];
            if(s.find(w)!=s.end()){
                continue;
            }
            s.insert(w);
            int sm=0;
            for(int j=i;j<n1;j++){
                if(i1[j][0]==w){
                    sm+=i1[j][1];
                }                
            }
            for(int j=0;j<n2;j++){
                if(i2[j][0]==w){
                    sm+=i2[j][1];
                }                
            }
            v.push_back({w,sm});
        }
        
        for(int i=0;i<n2;i++){
            int w=i2[i][0];
            if(s.find(w)!=s.end()){
                continue;
            }
            s.insert(w);
            int sm=0;
            for(int j=i;j<n1;j++){
                if(i1[j][0]==w){
                    sm+=i1[j][1];
                }                
            }
            for(int j=0;j<n2;j++){
                if(i2[j][0]==w){
                    sm+=i2[j][1];
                }                
            }
            v.push_back({w,sm});
        }
        sort(v.begin(),v.end());
        return v;
    }
};