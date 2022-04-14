/* Using In built Sort Function
TC - O(N*logN)
SC - O(1)
*/

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//     }
// };

/* by keeping count of 0s,1s and 2s
and then filling the vector according to that 
TC - O(N) : 2 trvaversals
*/

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         vector<int> c(3,0);
//         for(auto &x:nums)
//             c[x]++;
//         int p=0;
//         for(auto &x:nums){
//             if(c[p]==0)p++;
//             x=p;
//             c[p]--;
//         }
//     }
// };

/* by keeping 3 pointers: lo,mid and hi 
TC - O(N) : Single trvaversals
SC - O(1)
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo=0,mid=0,hi=nums.size()-1;
        /*
        nums[mid] == 0 We swap(nums[low], nums[mid] and 
                      we do low++ and mid++
        nums[mid] == 1 We do mid++
        nums[mid] == 2 We swap(nums[mid], nums[high]) and do high--
        */
        while(mid<=hi){
            if(nums[mid]==0){
                swap(nums[lo],nums[mid]);
                lo++; mid++;
            }
            else if(nums[mid]==1)
                mid++;
            else if(nums[mid]==2){
                swap(nums[hi],nums[mid]);
                hi--;
            }
        }        
    }
};