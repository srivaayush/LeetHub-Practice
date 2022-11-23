class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        set<char> s;
        // int n=b.size();
        // int m=b[0].size();
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(b[i][j]=='.')continue;
                if(s.find(b[i][j])!=s.end()){
                    return false;
                }
                s.insert(b[i][j]);
            }
            s.clear();
        }
        // for(int i=1;i<=3;i++)
        // {
        //     for(int j=1*i;j<=3*i;j++)
        //     {
        //         for(int k=1*i;k<=3*i;k++)
        //         {
        //             if(b[j-1][k-1]=='.')continue;
        //             if(s.find(b[j-1][k-1])!=s.end())
        //             {
        //                 return false;
        //             }
        //             s.insert(b[j-1][k-1]);     
        //         }            
        //         s.clear();
        //     }
        // }
        
        int rows[9][9] = {0};
        int cols[9][9] = {0};
        int blocks[3][3][9] = {0};

        for(int r=0;r<9;r++)
        {
            for(int c=0;c<9;c++)
            {
                if(b[r][c]=='.')continue;
                int num = b[r][c]-'1';
                if(cols[num][c]++ || rows[r][num]++ || blocks[r/3][c/3][num]++)
                    return false;
            }
        }
        
        return true;
    }
};