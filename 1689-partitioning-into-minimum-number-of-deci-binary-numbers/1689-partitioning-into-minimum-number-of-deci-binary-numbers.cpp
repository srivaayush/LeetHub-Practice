class Solution {
public:
    int minPartitions(string n) {
        int maxi=0;
        for(auto &x:n)
            maxi=max(maxi,(x-'0'));
        return maxi;
    }
};