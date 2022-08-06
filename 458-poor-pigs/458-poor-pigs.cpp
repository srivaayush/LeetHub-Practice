class Solution {
public:
    int poorPigs(int b, int mtd, int mtt) {
        if (b < 2) return 0;
        if (mtd > mtt) return INT_MAX;

        int k = mtt / mtd;
        return (int)ceil((log(b) / log(k + 1)));
    }
};