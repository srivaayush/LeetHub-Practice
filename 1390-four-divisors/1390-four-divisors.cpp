class Solution {
private:
    int store=INT_MIN;
    bool countDivisors(int n)
    {
        int cnt = 0;
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                store=i;
                if (n / i == i)
                    cnt++;
                cnt = cnt + 2;
            }
            if(cnt>4)return false;
        }        
        return (cnt==4);
    }
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(auto &x:nums){
            if(countDivisors(x)){
                sum+=(x+1+store+(x/store));
            }
        }
        return sum;        
    }
};