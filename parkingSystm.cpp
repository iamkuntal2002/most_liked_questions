#include<bits/stdc++.h>
using namespace std;
class ParkingSystem {
public:
    int big, medium, small;
    int cars[3];
    ParkingSystem(int big, int medium, int small) {
        // this->big = big;
        // this->medium = medium;
        // this->small = small;
        cars[0] = big;
        cars[1] = medium;
        cars[2] = small;
    }
    
    bool addCar(int carType) {
        return cars[carType -1]-- >0;
    }
};

int main(){
    ParkingSystem p(1,1,0);
    cout<<p.addCar(1)<<endl;
    cout<<p.addCar(2)<<endl;
    cout<<p.addCar(3)<<endl;
    cout<<p.addCar(1)<<endl;
    cout<<p.addCar(2)<<endl;
}