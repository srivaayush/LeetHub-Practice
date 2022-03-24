class Solution {
public:
    int hIndex(vector<int>& cit) {
        int ans=0;int n=cit.size();
        int lo=0,hi=n-1;        
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(cit[mid]==n-mid)return cit[mid];
            if(cit[mid]<n-mid)lo=mid+1;
            else hi=mid-1;
        }
        return n-lo;       
    }
};