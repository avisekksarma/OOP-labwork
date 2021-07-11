// 2. Write a class to store x, y, and z coordinates of a point in three-dimensional space. Using operator overloading, write friend functions to add, and subtract the vectors.

#include <iostream>

using namespace std;

class ThreeD
{
    int x, y, z;

public:
    ThreeD(int a=0, int b=0, int c=0)
    {
        x = a;
        y = b;
        z = c;
    }
    void display(){
        cout<<"x= "<<x<<", y= "<<y<<", z= "<<z<<endl;
    }
    friend ThreeD operator+(ThreeD& v1,ThreeD& v2);
    friend ThreeD operator-(ThreeD& v1,ThreeD& v2);
};
ThreeD operator+(ThreeD& v1,ThreeD& v2){
    return ThreeD(v1.x+v2.x,v1.y+v2.y,v1.z+v2.z);
}
ThreeD operator-(ThreeD& v1,ThreeD& v2){
    return ThreeD(v1.x-v2.x,v1.y-v2.y,v1.z-v2.z);
}
int main()
{
    ThreeD d1(1,-2,4);
    ThreeD d2(3,5,-7);
    ThreeD d3;
    d3 = d1+d2;
    d3.display();
    d3=d1-d2;
    d3.display();
}