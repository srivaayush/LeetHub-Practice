class Solution {
public:
    int countOperations(int n1, int n2) {
        int c=0,n3=min(n1,n2);
        while(n1!=0 && n2!=0){
            n1=abs(n2-n1);
            n2=n3;
            n3=min(n1,n2);c++;
        }
        return c;
    }
};