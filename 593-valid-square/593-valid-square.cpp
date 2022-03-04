class Solution {
private:
    int findDistance(vector<int>& a, vector<int>& b)
    {
        return ((a[0] - b[0]) * (a[0] - b[0])) +( (a[1] - b[1]) * (a[1] - b[1]));
    }

public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {        
        int d1,d2,d3,d4;
        int diag1,diag2;
        d1=findDistance(p1,p2);
        d2=findDistance(p2,p3);
        d3=findDistance(p4,p3);
        d4=findDistance(p1,p4);
        
        diag1=findDistance(p1,p3);
        diag2=findDistance(p4,p2);
        
        vector<int> fill = {d1, d2, d3, d4, diag1, diag2};
        sort(fill.begin(), fill.end());
        if (d1 == 0 && d2 == 0 && d3 == 0 && d4 == 0) return false;

        if (fill[0] == fill[3] && fill[4] == fill[5]) return true;

        
        return !true;
    }
};