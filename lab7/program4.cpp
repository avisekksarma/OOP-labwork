// 4. Create a polymorphic class Vehicle and create other derived classes Bus, Car, and Bike from Vehicle. Illustrate RTTI by the use of dynamic_cast and typeid operators in this program.

#include <iostream>
#include <typeinfo>
using namespace std;

class Vehicle
{
public:
    virtual void move() = 0;
};

class Bus : public Vehicle
{
public:
    void move()
    {
        cout << "Bus moved" << endl;
    }
};
class Car : public Vehicle
{
    const char* type;
public:
    Car(const char* t = "Lamborghini"):type(t){}
    void move()
    {
        cout << "Car moved" << endl;
    }
    void TypeOfCar(){
        cout<<"Type of Car :"<<type<<endl;
    }
};
class Bike : public Vehicle
{
public:
    void move()
    {
        cout << "Bike moved" << endl;
    }
};

int main()
{
    Vehicle *vptr;
    Bus bus;
    Car car("BMW");
    Bike bike;
    vptr = &car;
    cout << typeid(*vptr).name() << endl;
    Car *cptr;
    // v->TypeOfCar() => invalid as not all "V" have the car specific function.
    cptr = dynamic_cast<Car*>(vptr); 
    cptr->TypeOfCar();
    return 0;
}