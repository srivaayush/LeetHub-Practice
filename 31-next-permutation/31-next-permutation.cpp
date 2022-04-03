class Solution {
private:
    void reverse(vector<int>& a,int lo,int n){
        int hi=n-1;
        while(lo<hi){
            swap(a[lo],a[hi]);
            lo++;
            hi--;        
        }
    }
public:
    void nextPermutation(vector<int>& a) {
        // next_permutation(a.begin(),a.end());
        //find longestr non increasing subsequence from last
        int i=0,pivot=-1;
        int n=a.size();
        for(i=n-1;i>0;i--){
            if(a[i]>a[i-1]){
                // i-1 will become our pivot
                pivot=i-1;
                break;
            }
        }
        
        // to handle an edge case where an array is sorted in descending order
        if(pivot==-1){
            reverse(a,0,n);
            return;
        }
      
        //find rightmost successor to pivot
        int j=0;
        int successor=0;
        for(j=n-1;j>0;j--){
            if(a[pivot]<a[j]){
                successor=j;
                break;
            }
        }
        // swap successor with pivot
        swap(a[pivot],a[successor]);
        
        // reverse from pivot+1 to last
        reverse(a,pivot+1,n);
        
    }
};