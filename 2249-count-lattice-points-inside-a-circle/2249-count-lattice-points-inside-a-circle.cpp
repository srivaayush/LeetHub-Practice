class Solution {
public:
    int countLatticePoints(vector<vector<int>>& a) {
        set<pair<int,int>>ans;
        for(auto &it:a){
            int x=it[0];
            int y=it[1];
            int r=it[2];
            int u=200;
            for(int a=-u;a<=u;a++){
                for(int b=-u;b<=u;b++){
                    if( (((x-a)*(x-a)) +((y-b)*(y-b))) <=(r*r)){
                        // cout<<a<<"  "<<b<<"\n";
                        ans.insert({a,b});
                        
                    }
                        
                }
            }
        }
        // for(auto &x:ans)cout<<x.first<<" "<<x.second<<"\n";
        return ans.size();
    }
};