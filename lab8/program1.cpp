// 1. Write a program to demonstrate the use of different ios flags and functions to format the output. Create a program to generate the bill invoice of a department store by using different formatting.

#include <iostream>
using namespace std;

class Department
{
private:
    int numItems;
    float price;

public:
    Department(int numItems = 0, float price = 0) : numItems(numItems), price(price) {}
    void display()
    {
        cout << "Items bought:";
        cout.width(6);
        cout << numItems << endl;
        cout << "Price of item:";
        cout.precision(4);
        cout << price << endl;
        cout << "Total:";
        cout.setf(ios::fixed, ios::floatfield);
        cout.setf(ios::showpos);
        cout << numItems * price << endl;
    }
};

int main()
{
    Department d(124,37.84350);
    d.display();
}