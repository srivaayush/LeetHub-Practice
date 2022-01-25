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
        if(i==n-1 || i==0)return false;
        int j=0;
        while(j<n-1){
            if(arr[j]>=arr[j+1])break;
            j++;
        }
        if(j==i)return true;
        return false;
    }
};