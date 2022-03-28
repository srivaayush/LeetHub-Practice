class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return false;
        int hi = n - 1;
        int lo = 0;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] == target) {
                return true;
            }

            if (!(nums[lo] != nums[mid])) {
                lo++;
                continue;
            }

            
            bool pivotArray = (nums[lo] <=nums[mid]);
            
            bool targetArray = (nums[lo] <= target);
            if ((pivotArray ^ targetArray)==true) { 
                if (pivotArray==true) {
                    lo = mid + 1;
                } else {
                    hi = mid - 1; 
                }
            } 
            else { 
                if (nums[mid] < target) {
                    lo = mid + 1;
                } 
                else {
                    hi = mid - 1;
                }
            }
        }
        return false;
    }
};