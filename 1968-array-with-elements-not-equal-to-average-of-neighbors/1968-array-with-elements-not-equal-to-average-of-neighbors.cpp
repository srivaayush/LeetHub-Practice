class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int a=nums[n/2];
        vector<int> arr(n,0);
        int j=0,k=1;
        for(int i=0;i<n;i++){
            if(nums[i]<=a){
                if(j>=n)j=n-1;
                arr[j]=nums[i];
                j+=2;
            }
            if(nums[i]>a){
                if(k>=n)k=n-1;
                arr[k]=nums[i];
                k+=2;
            }
        }
        return arr;
    }
};