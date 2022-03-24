//Brute Force

// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int mini= *min_element(nums.begin(), nums.end()) ;
//         return mini;
//     }
// };

class Solution {
public:
    int findMin(vector<int>& A) {
        int ans=0;
        
        
        int n=A.size();
        if(n==0)return -1;
        if(n==1)return A[0];
        int lo=0,hi=n-1;
        if(A[0]<A[n-1])return A[0];
        
        
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if(mid>0 && A[mid]<A[mid-1]){
                return A[mid];
            }
            else if(A[lo]<=A[mid] && A[mid]>A[hi]){
                lo=mid+1;                
            }
            else
                hi=mid-1;            
        }
        
        
        return A[lo];
    }
};