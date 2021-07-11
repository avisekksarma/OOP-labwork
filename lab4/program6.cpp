// 6. Create a class with a data member to hold "serial number" for each object created from the class. That is, the first object created will be numbered 1, the second 2 and so on by using the basic concept of static data members. Use static member function if it is useful in any of the member functions declared in the program. Otherwise make separate program that demonstrate the use of static member function.

#include <iostream>

using namespace std;

class Student
{
    int serialNum;
    static int count;

public:
    Student()
    {
        serialNum = count + 1;
        increaseCount();
    }
    void display()
    {
        cout << "Serial num = " << serialNum << endl;
    }
    static void increaseCount();
};

void Student::increaseCount()
{
    count++;
}

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}