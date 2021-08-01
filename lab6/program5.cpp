//5. Write a base class that asks the user to enter a complex number and make a derived class that adds the complex number of its own with the base. Finally, make a third class that is a friend of derived and calculate the difference of the base complex number and its own complex number.

#include <iostream>
using namespace std;

class Bcomplex
{
    int r;
    int i;

public:
    void get()
    {
        cout << "Enter a complex number:" << endl;
        cin >> r;
        cin >> i;
    }
    int &getR()
    {
        return r;
    }
    int &getI()
    {
        return i;
    }
    void display()
    {
        cout << "(" << r << "," << i << ")" << endl;
    }
};

class Dcomplex : public Bcomplex
{
public:
    Dcomplex operator+(Bcomplex other)
    {
        Dcomplex n;
        n.getR() = this->getR() + other.getR();
        n.getI() = this->getI() + other.getI();
        return n;
    }
    friend class Tcomplex;
};

class Tcomplex : public Bcomplex
{
public:
    Tcomplex operator-(Bcomplex other)
    {
        Tcomplex t;
        t.getR() = this->getR() - other.getR();
        t.getI() = this->getI() - other.getI();
        return t;
    }
};

int main()
{
    Bcomplex b;
    b.get();
    Dcomplex d;
    d.get();
    Dcomplex m = d + b;
    m.display();
    Tcomplex t;
    t.get();
    Tcomplex t2;
    t2 = t-b;
    t2.display();
}
