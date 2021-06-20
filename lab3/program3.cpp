// 3. Create a class called carpark that has int data member for car id, int data member for charge/hour and float data member for time. Set the data and show the charges and parked hours of corresponding car id. Make two member functions for setting and showing the data. Member function should be called from other functions.

#include <iostream>

using namespace std;

class CarPark{
    public:
    void setData(int carId,int cph,float t){
        id=carId;
        chargePerHour=cph;
        timeInSecs = t;
    }
    void showData(){
        cout<<"Total charge: "<<timeInSecs/3600.0 * chargePerHour<<endl;
        cout<<"Total time parked in hours: "<<timeInSecs/3600.0<<endl;
    }
    private:
    int id;
    int chargePerHour;
    float timeInSecs;
};

int main(){
    CarPark c;
    c.setData(1,12,4800);
    c.showData();
    return 0;
}