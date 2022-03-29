class SeatManager {
   priority_queue<int, vector<int>, greater<int> > pq;
    int N=0;
public:
    SeatManager(int n) {
        for(int i = 1; i <= n; i++) pq.push(i);N=n+1;
    }
    
    int reserve() {
        int tp = pq.top(); 
        pq.pop();
        return tp;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */