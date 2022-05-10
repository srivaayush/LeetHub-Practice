class Solution {
public:
    vector<int> pancakeSort(vector<int>& a) {
        int n=a.size();
        vector<int> ans;
        for(int i=n;i>0;i--){
            int maxi=a[0];
            int maxindex=0;
            for(int j=0;j<i;j++){
                if(maxi<a[j]){
                    maxi=a[j];
                    maxindex=j;
                }
            }
            // if(maxindex==i-1)return ans;
            ans.push_back(maxindex+1);
            ans.push_back(i);
            reverse(a.begin(),a.begin()+maxindex+1);
            reverse(a.begin(),a.begin()+i);
        }
        return ans;
    }
};