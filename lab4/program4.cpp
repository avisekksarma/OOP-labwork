// 4. Assume that one constructor initializes data member say num_vehicle, hour and rate. There should be 10% discount if num_vehicle exceeds 10. Display the total charge. Use two objects and show bit-by-bit copy of one object to another (make your own copy constructor).

#include <iostream>
#include <cstring>

using namespace std;

class CarPark
{
private:
    // assuming all vehicles are parked for same hour
    int num_vehicle, hour;
    // rate = price/hour for a vehicle.
    float rate;

public:
    CarPark(int n, int h, float r)
    {
        num_vehicle = n;
        hour = h;
        rate = r;
    }
    CarPark(CarPark &other)
    {
        num_vehicle = other.num_vehicle;
        hour = other.hour;
        rate = other.rate;
    }
    void displayCharge()
    {
        float discount = 0.0f;
        if (num_vehicle > 10)
        {
            discount = 0.1f;
        }
        float charge = num_vehicle * hour * rate * (1.0f - discount);
        cout << "Total charge= " << charge << endl;
    }
};

int main()
{
    CarPark c1(5, 3, 12);
    c1.displayCharge();
    CarPark c2(3,4,8);
    c2.displayCharge();
    CarPark c3 = c2;
    c3.displayCharge();
    return 0;
}