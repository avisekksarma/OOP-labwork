//1. Write a program to create a class shape with functions to find the area of the shapes and display the names of the shapes and other essential components of the class. Create derived classes circle, rectangle, and trapezoid each having overriding functions area() and display(). Write a suitable program to illustrate virtual functions and virtual destructors.

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual ~Shape()
    {
        cout << "called shape destructor" << endl;
    }
    virtual void area()
    {
        cout << "called shape area" << endl;
    }
    virtual void display()
    {
        cout << "called shape display" << endl;
    }
};

class Circle : public Shape
{
    float r;

public:
    Circle(float rad = 0)
    {
        r = rad;
    }
    ~Circle()
    {
        cout << "called Circle destructor" << endl;
    }
    void area()
    {
        cout << "called circle area" << endl;
        cout << "Area = " << 3.14 * r * r << endl;
    }
    void display()
    {
        cout << "called circle display" << endl;
    }
};

class Rectangle : public Shape
{
    float l, b;

public:
    Rectangle(float l = 0, float b = 0)
    {
        this->l = l;
        this->b = b;
    }
    ~Rectangle()
    {
        cout << "called Rectangle destructor" << endl;
    }
    void area()
    {
        cout << "called Rectangle area" << endl;
        cout << "Area = " << l * b << endl;
    }
    void display()
    {
        cout << "called Rectangle display" << endl;
    }
};

class Trapezoid : public Shape
{
    float a, b, h;

public:
    Trapezoid(float a = 0, float b = 0, float h = 0)
    {
        this->a = a;
        this->b = b;
        this->h = h;
    }
    ~Trapezoid()
    {
        cout << "called Trapezoid destructor" << endl;
    }
    void area()
    {
        cout << "called Trapezoid area" << endl;
        cout << "Area = " << 0.5*(a+b)*h << endl;
    }
    void display()
    {
        cout << "called Trapezoid display" << endl;
    }
};

int main()
{
    Shape *sp;
    Circle c(3);
    sp = &c;
    sp->area();
    sp->display();
    Rectangle r(2,4);
    sp =&r;
    sp->area();
    sp->display();
    sp = new Trapezoid(2,4,5);
    sp->area();
    sp->display();
    delete sp;
    cout <<"====Now calls the destructors in reverse order===="<<endl;
    return 0;
}
