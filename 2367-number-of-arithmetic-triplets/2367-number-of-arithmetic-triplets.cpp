class Solution {
public:
    int arithmeticTriplets(vector<int>& a, int d) {
        int n=a.size(),c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if((a[j]-a[i])==d && (a[k]-a[j])==d)
                        c++;
                }
            }
        }
        return c;
    }
};