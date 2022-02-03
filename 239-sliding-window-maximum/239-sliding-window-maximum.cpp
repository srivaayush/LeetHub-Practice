class Solution {

// Input:
// N = 9, K = 3
// arr[] = 1 2 3 1 4 5 2 3 6
//     1 2 3
// Output: 
// 3 3 4 5 5 5 6 
    
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        // deque <int> d;
        // vector<int> ans;
        // for(int i=0;i<n;i++){
        //     while(d.empty()==false && d.back()<nums[i]){
        //         d.pop_back();
        //     }
        //     d.push_back(nums[i]);  
        //     if(d.size()>k){
        //         while(d.size()>k){
        //             d.pop_front();
        //         }
        //         d.pop_back();
        //     }
        //     if(i>=k-1)
        //         ans.push_back(d.front());
        // }
        // return ans;
        deque<int> d;
        vector<int> ans;
        int i=0,j=0,p=k-1;
        for(int i=0;i<n;i++){
            while(d.empty()==false && d.back()<nums[i]){
                d.pop_back();
            }
            d.push_back(nums[i]);
            if(i-j == p ){
                ans.push_back(d.front());
                
                if(nums[j]==d.front()) d.pop_front();
                 j++;
            }
        }
        return ans;
    }
};