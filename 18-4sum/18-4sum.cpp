class Solution {
private:
    int removeRepeated(vector<int> &nums){
        int n=nums.size();
        if (n==0 || n==1)
        return n;
        int j = 0;
        for (int i=0; i < n-1; i++)
            if (nums[i] != nums[i+1])
                nums[j++] = nums[i];

        nums[j++] = nums[n-1];
        return j;
    }
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> s;
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int nt  =  target - nums[i] - nums[j];                
                int x = j+1 , y = n-1;                
                while(x < y){
                    int sum = nums[x] + nums[y];                    
                    if(sum > nt) y--;
                    else if(sum < nt ) x++;
                    else  {
                        s.insert({nums[i] , nums[j] , nums[x] , nums[y]});
                        x++;
                        y--;
                    };
                }
            }
        }
        for(auto &x:s)
            ans.push_back(x);
            
        return ans;
    }
};