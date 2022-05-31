class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prev=-1,cur=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            prev=cur;
            if(nums[i]==1){               
                cur=i;
                // cout<<prev<<" "<<cur<<endl;
                if(prev!=-1 && (cur-prev)<=k){
                    // cout<<i;
                    return false;
                }
            }
        }
        return true;
    }
};