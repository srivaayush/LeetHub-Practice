class Solution {
public:
    void rotate(vector<int>& a, int k) {
        int n=a.size();
        if (k%n == 0) return;
        int first = 0, middle = n-k%n, last = n;
        int next = middle;
        while(first != next) {
            swap (a[first++], a[next++]);
            if (next == last) next = middle;
            else if (first == middle) middle = next;
        }           
    }
};