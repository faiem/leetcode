class ParkingSystem {
public:
    
    int ps[3];
    
    ParkingSystem(int big, int medium, int small) {
        
        ps[0] = big;
        ps[1] = medium;
        ps[2] = small;
        
    }
    
    bool addCar(int carType) {
        if(ps[carType-1]>0)
        {
            ps[carType-1]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */