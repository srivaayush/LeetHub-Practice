class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;int n=nums.size();
        if(nums.size()==0)return ans;
        int prev=nums[0];string s="";
        int start=nums[0],end=nums[0];
        for (int i = 0 ; i < n; i++) {    
            start = nums[i];
            while ( (i+1)<n){
                if((nums[i]+1) != (nums[i + 1]) )break;
                i++;
            }                
             end = nums[i];            
            if (start<end) {
                string temp=to_string(start)  + "->" + to_string(nums[i]);
                ans.push_back(temp); 
            }
            else{
                string temp=to_string(start);
                ans.push_back(temp); 
            }        
        }
        return ans;
    }
};