class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        int n=a.size();
        int i=0,j=n-1;
        vector<int>v;
        while(i<j)
        {
            if((a[i]+a[j])==t){
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
                // return {i,j};
            }
            if((a[i]+a[j])<t){
                i++;
            }
            else{
                j--;
            }
        }
        v.push_back(-1);
        return v;
    }
};