class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {    
        int n = tops.size();
        bool top=true,bottom=true;
        int  val1 = tops[0];
        int val2 = bottoms[0];
        for(int i=1;i<n;i++)
        {
           if(top) if(val1 != tops[i] && val1 != bottoms[i]) top = false;
           if(bottom) if(val2 != tops[i] && val2 != bottoms[i]) bottom = false;
           if(!top && !bottom) return -1; 
        }
        int key = val1;
        if(bottom)
        {
            for(int i=0;i<n;i++)
            {
                int temp = tops[i];
                tops[i] = bottoms[i];
                bottoms[i] = temp;
            }
            key = val2;
        }

        int count1=0,count2=0,flip=0;
        for(int i=0;i<n;i++)
        {
            if(tops[i]==key)count1++;
            if(bottoms[i]==key)count2++;
        }

        for(int i=0;i<n;i++)
        {
            if(count1 < count2)
            {
                if(tops[i]==key && bottoms[i]!=key) flip++;
            }
            else
            {
                if(tops[i]!=key && bottoms[i]==key) flip++;
            }
        }
        return flip;
    }
};