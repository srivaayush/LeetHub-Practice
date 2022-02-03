class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int> d;
        vector<int> ans;
        int i=0,j=0,p=k-1;
        for(int i=0;i<n;i++){
            while(d.empty()==false && d.back()<nums[i]){
                d.pop_back();
            }
            d.push_back(nums[i]);
            if((i-j) ==p){
                ans.push_back(d.front());                
                if(nums[j]==d.front()) d.pop_front();
                 j++;
            }
        }
        return ans;
    }
};