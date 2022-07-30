class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        if(a.size()==1)return a[0];
        
        int l=0, r=a.size()-1, mid, n;
        
        while(l < r){
            // mid = l+(r-l)/2;
            mid = (r+l)/2;
            if(mid%2 == 0)  
                n=mid+1;
            else
                n=mid-1;
            
            if(a[mid]==a[n])
                l = mid+1;     
            else 
                r = mid;
        }
        return a[l];
    }
};