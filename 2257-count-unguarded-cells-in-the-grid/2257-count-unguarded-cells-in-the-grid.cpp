class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& g, vector<vector<int>>& w) {
        vector<vector<int>> mp(m,vector<int>(n,0));
        sort(g.begin(),g.end());
        sort(w.begin(),w.end());
        
        int g1=0,w1=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                // guard
                if(g1<g.size() && g[g1][0]==i && g[g1][1]==j){
                    mp[i][j]=-1;
                    g1++;
                }
                //wall
                else if(w1<w.size() && w[w1][0]==i && w[w1][1]==j){
                    mp[i][j]=-2;
                    w1++;
                }
                else
                    mp[i][j]=0;
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mp[i][j]==-1){
                    
                    int te=j;
                    while(te>=0){
                        if(mp[i][te]==-2)
                            break;
                        if(mp[i][te]!=-1)
                            mp[i][te]=-3;
                        te--;
                    }
                    
                    while(j<n){
                        if(mp[i][j]==-2)
                            break;
                        if(mp[i][j]!=-1)
                            mp[i][j]=-3;
                        j++;
                    }
                }
            }
        }
        
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mp[j][i]==-1){
                    int te=j;
                    while(te>=0){
                        if(mp[te][i]==-2)
                            break;
                        if(mp[te][i]!=-1)
                            mp[te][i]=-3;
                        te--;
                    }
                    while(j<m){
                        if(mp[j][i]==-2)
                            break;
                        if(mp[j][i]!=-1)
                            mp[j][i]=-3;
                        j++;
                    }
                }
            }
        }
        int ans=0;
        for(auto &x:mp)
            for(auto &y:x)
                if(y==0)ans++;
                             
        return ans;
    }
};