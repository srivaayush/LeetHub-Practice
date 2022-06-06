class Solution {
public:
    int minMaxGame(vector<int>& a) {
        int n=a.size();
        while(n!=1){
            vector<int> te;int c=0;
            for(int i=0;i<n-1;i+=2){
                if(c%2==0){
                    te.push_back(min(a[i],a[i+1]));
                }
                else{
                    te.push_back(max(a[i],a[i+1]));
                }
                c++;
            }
            a.clear();
            a=te;
            n=a.size();
        }
        return a[0];
    }
};