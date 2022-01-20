class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {        
        
//         brute force solution
//         int speed=1;        
//         while (true) {
//             int hs = 0;            
//             for (int pile : piles) {
//                 hs += pile / speed + (pile % speed != 0);
//                 if (hs > h) {
//                     break;
//                 }
//             }
//             if (hs <= h) {
//                 return speed;
//             } else {
//                 speed ++;
//             }            
//         }
//         return -1;     
        
        // optimised solution
        int begin = 1;
        int end = *max_element(piles.begin(), piles.end());        
        while(begin<end){
            int mid=(begin+end)/2;
            int speed=mid;
            int hs = 0;            
            for (int pile : piles) {
                hs += pile / speed + (pile % speed != 0);                
            }            
            if (hs <= h) {
                end=speed;
            }         
            else{
                begin=speed+1;
            }
        }
        return end;
        
        
    }
};