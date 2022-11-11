class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n=a.size();int c=1;
        int k=0;
        if(n<2)return n;
        for(int i = 1; i < n; ++i) 
            if(a[i] != a[i-1]) a[c++] = a[i];
       
         return c;
    }
};