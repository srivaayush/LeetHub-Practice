class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0;
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
        int maxScore=0;
        while(i<=j)
        {
            if(power<tokens[i])
            {
                if(score==0)return maxScore;
                else
                {
                    power+=tokens[j--];
                    score--;
                }
            }
           else
           {
               power-=tokens[i++];
               score++;
           }
            maxScore=max(score,maxScore);
        }
        return maxScore;
    }
};