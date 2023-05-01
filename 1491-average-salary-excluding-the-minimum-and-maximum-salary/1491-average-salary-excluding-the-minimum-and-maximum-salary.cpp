class Solution {
public:
    double average(vector<int>& s) {
        sort(s.begin(),s.end());
        double av=0.0;int n=(s.size());
        for(int i=1;i<n-1;i++){
            av+=(s[i]*1.00000);
        }
        av=av/(n-2);
        return av;
    }
};