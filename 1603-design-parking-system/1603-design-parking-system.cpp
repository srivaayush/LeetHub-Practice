class ParkingSystem {
    vector<int> sz;
public:
    ParkingSystem(int big, int medium, int small) {
        sz={big,medium,small};
    }
    
    bool addCar(int carType) {
        sz[carType-1]--;
        return(sz[carType-1]>=0);
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */