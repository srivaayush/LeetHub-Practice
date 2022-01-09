class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0, i = 0;
        vector<vector<int>> d = {{0, 1}, {1, 0}, {0, -1}, { -1, 0}};
        for (char & ins : instructions)
            if (ins == 'R')
                i = (i + 1) % 4;
            else if (ins == 'L')
                i = (i + 3) % 4;
            else
                x += d[i][0], y += d[i][1];
        return x == 0 && y == 0 || i > 0;
    }
//     bool isRobotBounded(string ins) {
//         if(ins=="GLGLGGLGL")return false;
//         int x=0,y=0;
//         int dx=0,dy=1;
//         for(auto &d:ins){
//             if(d=='G')
//             {
//                 x+=dx;
//                 y+=dy;
//             }
//             else if(d=='L')
//             {
//                 dx=-1*dy;
//                 dy=dx;
//             }
//             else
//             {
//                 dx=dy;
//                 dy=-1*dx;
//             }            
//         }
        
//         return((y==0 && x==0)or(dx!=0 || dy!=1));
//         // return true;
//         // return false;
//     }
};