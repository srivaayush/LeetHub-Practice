class Solution {
public:
    int minDeletion(vector<int>& a) {
        vector<int> res;
        int n=a.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(j%2!=0)res.push_back(a[i]);
            else{
                if(i!=n-1 && a[i]==a[i+1])
                    continue;
                else{
                    res.push_back(a[i]);
                }
            }
            j++;
        }
        int ans=a.size()-res.size();
        if(res.size()%2!=0)ans++;
        return ans;
    }
};