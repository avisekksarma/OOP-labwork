// 2. Write two classes to store distances in meter-centimeter and feet-inch systems respectively. Write conversions functions so that the program can convert objects of both types.

#include <iostream>
using namespace std;

class D2;
class D1
{
    float m;
    float cm;

public:
    D1(float m = 0, float cm = 0) : m(m), cm(cm) {}
    D1(D2 &obj);
    friend  class D2;
    void display(){
        cout<< m<<" metres and "<<cm << " cms"<<endl;
    }
};

class D2
{
    float f;
    float in;

public:
    D2(float f = 0, float i = 0) : f(f), in(i) {}
    D2(D1 & obj);
    friend D1::D1(D2 & obj);
    void display(){
        cout<< f<<" feet and "<<in << " inches"<<endl;
    }
};

D1::D1(D2 &obj)
{
    float temp_m = (1 / 3.281) * obj.f;
    m = int(temp_m);
    cm = (temp_m - int(temp_m)) * 100;
    cm = cm + obj.in * 2.54;
    m = m + int(cm / 100);
    cm = cm - int(cm / 100) * 100;
}

D2::D2(D1 &obj){
    float temp_f= obj.m * 3.281;
    f = int(temp_f);
    in = (temp_f - int(temp_f))*12;
    in = in + obj.cm *(1/2.54);
    f = f + int(in/12);
    in = in - int(in/12)*12;
}


int main(){
    D1 d1(7,38.45);
    d1.display();
    cout<<"After conversion: "<<endl;
    D2 d2 = d1;
    d2.display();
    cout <<"After conversion back as before:"<<endl;
    d1 = d2;
    d1.display();
    return 0;
}