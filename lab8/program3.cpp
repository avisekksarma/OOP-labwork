// 3. Write a program to overload stream operators to read a complex number and display the complex number in a+ib format.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Complex
{
private:
    int r, i;

public:
    Complex(int r = 0, int i = 0) : r(r), i(i) {}
    friend std::istream &operator>>(std::istream &in, Complex &c);
    friend std::ostream &operator<<(std::ostream &out, Complex &c);
};

std::istream &operator>>(std::istream &in, Complex &c)
{
    cout << "Enter real part:" << endl;
    in >> c.r;
    cout << "Enter imag part:" << endl;
    in >> c.i;
    return in;
}
std::ostream &operator<<(std::ostream &out, Complex &c)
{
    out<<c.r<<"+i"<<c.i<<endl;
    return out;
}

int main()
{
    Complex c;
    cin>>c;
    cout<<"You entered:"<<endl;
    cout<<c;
}