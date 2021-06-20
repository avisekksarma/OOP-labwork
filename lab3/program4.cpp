// 4. Write a program with classes to represent circle, rectangle and triangle. Each classes should have data members to represent the actual objects and member functions to read and display objects, find perimeter and area of the objects and other useful functions. Use the classes to create objects in your program.
 

#include <iostream>
#include <cmath>

using namespace std;

class Rect{
    public:
    void setData(float l,float b){
        length =l;
        breadth=b;
    }
    float area(){
        return length*breadth;
    }
    float perimeter(){
        return (2*(length+breadth));
    }
    private:
    float length;
    float breadth;
};
class Circle{
    public:
    void setData(float r){
        radius=r;
    }
    float area(){
        return 3.14*radius*radius;
    }
    float perimeter(){
        return 2*3.14*radius;
    }
    private:
    float radius;
};

class Triangle{
    public:
    void setData(float a,float b,float c){
        s1=a;
        s2=b;
        s3=c;
    }
    float area(){
        float s  = (s1+s2+s3) / 2;
        return pow(s*(s-s1)*(s-s2)*(s-s3),0.5);
    }
    float perimeter(){
        return s1+s2+s3;
    }
    private:
    float s1;
    float s2;
    float s3;
};
int main(){
    Rect r;
    r.setData(12,10);
    cout<<"Rectangle area = " <<r.area()<<endl;
    cout<<"Rectangle perimeter="<<r.perimeter()<<endl;

    Circle c;
    c.setData(4.0f);
    cout<<"Area of circle = " <<c.area()<<endl;
    cout<<"Perimeter of circle= "<<c.perimeter()<<endl;

    Triangle t;
    t.setData(4.0f,2.0f,3.0f);
    cout<<"Area of triangle = " <<t.area()<<endl;
    cout<<"Perimeter of triangle = "<<t.perimeter()<<endl;

    return 0;
}