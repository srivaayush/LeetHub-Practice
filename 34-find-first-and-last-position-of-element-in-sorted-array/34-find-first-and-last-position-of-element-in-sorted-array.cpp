class Solution {
public:
    vector<int> searchRange(vector<int>& A, int x) {
        int lo=0, hi=A.size()-1;
        int l=-1,u=-1;
        
        
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(A[mid]>x){
                hi=mid-1;
            }
            if(A[mid]<x){
                lo=mid+1;
            }
            if(A[mid]==x){
                if(mid == lo || A[mid] != A[mid-1]){
                    l = mid;
                    break;
                }
                else{
                    hi = mid-1;
                    l = mid-1;
                }
            }
        }
        lo=0, hi=A.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(A[mid]>x){
                hi=mid-1;
            }
            if(A[mid]<x){
                lo=mid+1;
            }
            if(A[mid]==x){
                if(mid == hi || A[mid] != A[mid+1]){
                    u = mid;
                    break;
                }
                else{
                    lo = mid+1;
                    u = mid+1;
                }
            }
        }
        
        // cout<<mid<<endl;
        return {l,u};
    }
};