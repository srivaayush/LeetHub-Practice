class Solution {    
public:
    int getKth(int lo, int hi, int k) {
        // vector<int> power(hi-lo,0);
        vector<pair<int,int>> power;
        vector<int> dp(1000,0);
        for(int i=lo;i<=hi;i++){
            int temp=i;
            int a=0;
            while(i!=1){
                if(i%2==0){
                    i=i/2;
                }
                else{
                    i=3*i+1;
                }
                a++;
            }
            i=temp;
            power.push_back(make_pair(a,i));
            // power[a]=i;
        }
        sort(power.begin(), power.end());
        k--;
        for(auto &x:power){
            // cout<<x.first<<"    "<<x.second<<endl;
            if(k==0)
                return x.second;
            k--;
        }
        return -1;
    }
};





