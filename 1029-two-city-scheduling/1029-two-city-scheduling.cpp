class Solution{
private:
    static bool cmp(vector<int> a,vector<int> b){
        return (a[1]-a[0]<b[1]-b[0]);
    } 
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),cmp);
        int ans=0;int n=costs.size()/2;
        int c=0;
        for(auto &x:costs){
            if(c<n)ans+=x[1];
            else ans+=x[0];
            c++;
        }
        return ans;
    }
};