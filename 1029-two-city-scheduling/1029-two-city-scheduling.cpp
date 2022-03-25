class Solution{
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> diff;
        int sum=0;
        for(auto &x:costs){
            diff.push_back(x[1]-x[0]);
            sum+=x[0];
        }
        // cout<<sum;
        sort(diff.begin(),diff.end());
        int n=costs.size()/2;
        for(int i=0;i<n;i++)sum+=diff[i];
        return sum;
    }
};