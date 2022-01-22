class Solution {
bool dp [100001];
    public:
    bool winnerSquareGame(int n) {
        if (dp[n] != NULL) {
            return dp[n];
        }
        bool answer = false;
        for (int move = 1; n - move * move >= 0; ++move) {
            if (n - move * move == 0) {
                // current player won
                answer = true;
                break;
            } else {
                // Hand over turn to other player.
                // If there is any subtree, where the other person loses. We use that subtree.
                // 1. OR means we choose any winning subtree.
                // 2. ! in !solve(n - move*move, dp) means we hand over turn to other player after reducing n by move*move
                answer |= !winnerSquareGame(n - move * move);
            }
        }
        return dp[n] = answer;
    }
};