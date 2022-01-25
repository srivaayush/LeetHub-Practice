class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3)return false;
        int i=n-1;
        while(i>=1){
            if(arr[i]>=arr[i-1])break;
            i--;
        }
        int j=0;
        while(j<n-1){
            if(arr[j]>=arr[j+1])break;
            j++;
        }
        cout<<i<<"  "<<j<<endl;
        if(j==i &&i!=n-1 && j!=0)return true;
        return false;
    }
};