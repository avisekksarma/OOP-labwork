// 1. Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and vice versa. Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.

#include <iostream>

using namespace std;

class Distance
{
    float m;
    float cm;

public:
    Distance() {}
    Distance(float m, float cm)
    {
        this->m = m;
        this->cm = cm;
    }
    Distance(float data)
    {
        m = int(data);
        cm = (data - int(data))*100;
    }
    operator float()
    {
        return m + cm / 100;
    }
    void display(){
        cout<< m<<" metres and "<<cm << " cms"<<endl;
    }
};

int main()
{
    Distance d(1, 56);
    cout << "Conversion to float:" << endl;
    cout << float(d) <<" metres"<< endl;
    Distance d2;
    d2 = 31.789;
    d2.display();

    return 0;
}