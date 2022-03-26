class Solution {
public:
    int search(vector<int>& nums, int x) {
        int lo=0,hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==x)return mid;
            if(nums[mid]<x)lo=mid+1;
            if(nums[mid]>x)hi=mid-1;
        }
        return -1;
    }
};