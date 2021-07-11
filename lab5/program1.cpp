//  Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.

// A. make a particular member function of one class to friend function in another class for addition

// B. make other three functions to work as a bridge between the classes for multiplication, division and subtraction.

// C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.

#include <iostream>

using namespace std;

class Cartesian2;
class Cartesian1
{
private:
    int x, y;

public:
    Cartesian1(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "x= " << x << endl
             << "y= " << y << endl;
    }
    void add(Cartesian2 c2);
    friend void multiply(Cartesian1 c1, Cartesian2 c2);
    friend void divide(Cartesian1 c1, Cartesian2 c2);
    friend void subtract(Cartesian1 c1, Cartesian2 c2);
};

class Cartesian2
{
private:
    int x, y;

public:
    Cartesian2(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "x= " << x << endl
             << "y= " << y << endl;
    }
    friend void Cartesian1::add(Cartesian2 c2);
    friend void multiply(Cartesian1 c1, Cartesian2 c2);
    friend void divide(Cartesian1 c1, Cartesian2 c2);
    friend void subtract(Cartesian1 c1, Cartesian2 c2);
};
void Cartesian1::add(Cartesian2 c2)
{
    cout << "New x = " << x + c2.x << endl;
    cout << "New y = " << y + c2.y << endl;
}
void multiply(Cartesian1 c1, Cartesian2 c2)
{
    cout << "New x = " << c1.x * c2.x << endl;
    cout << "New y = " << c1.y * c2.y << endl;
}
void divide(Cartesian1 c1, Cartesian2 c2)
{
    cout << "New x = " << c1.x / float(c2.x) << endl;
    cout << "New y = " << c1.y / float(c2.y) << endl;
}
void subtract(Cartesian1 c1, Cartesian2 c2)
{
    cout << "New x = " << c1.x - c2.x << endl;
    cout << "New y = " << c1.y - c2.y << endl;
}
int main()
{
    Cartesian1 c1(1, 4);
    c1.display();
    Cartesian2 c2(-5, 2);
    c2.display();
    c1.add(c2);
    multiply(c1, c2);
    divide(c1, c2);
    subtract(c1, c2);
    return 0;
}