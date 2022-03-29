class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size();
        a[0]=1;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<=1){
                continue;                
            }
            a[i]=a[i-1]+1;
        }
        return a[n-1];            
    }
};