class Solution {
//     O(1) Space Complexity & O(1) Time Complexity
public:
    int addDigits(int num) {        
        return 1+(num-1)%9;
    }
//     O(1) Space Complexity & O(logN) Time Complexity    
// public:
    // int addDigits(int num) {
    //     while(num>9){
    //         int s=0;
    //         while(num>0){
    //             s+=(num%10);
    //             num=num/10;
    //         }
    //         num=s;
    //     }
    //     return num;
    // }
};