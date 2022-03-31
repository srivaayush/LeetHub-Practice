class Solution {
    typedef long long ll;
private:
    bool checkValidity(vector<int> nums, int m, int mid){
        int cnt=1; 
        int sum=0;
        for(auto &x : nums){
            sum+=x;
            if (sum>mid){
                cnt++;
                sum=x;
                if(sum>mid) 
                return false;
            }
            if (cnt>m) 
            return false;
        }
        return true; 
    }
public:
    int splitArray(vector<int>& nums, int m) {
        int n=size(nums); 
        ll  sum=accumulate(nums.begin(),nums.end(),0);
        if (m==1) 
            return sum;
        ll low=0;ll high=sum;
        ll mid;
        ll res=INT_MAX;
        while (low<=high){
            mid=low+(high-low)/2;
            if (checkValidity(nums,m,mid)) 
            {
                res=min(res,mid);
                high=mid-1; 
            }
            else 
                low=mid+1;
            
        }
        return res;
    }   
};