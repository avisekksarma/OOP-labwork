// 2. Create a class Person and two derived classes Employee and Student, inherited from class Person. Now create a class Manager which is derived from two base classes Employee and Student. Show the use of the virtual base class.

#include <iostream>
using namespace std;

class Person
{
public:
    void display()
    {
        cout << "I am Person display" << endl;
    }
};

class Employee : virtual public Person
{
public:
    void display()
    {
        cout << "I am Employee display" << endl;
    }
};
class Student : virtual public Person
{
public:
    void display()
    {
        cout << "I am Student display" << endl;
    }
};

class Manager : public Employee, public Student
{
public:
    void display()
    {
        Employee::display();
        Student::display();
        // Person::display(); => invalid as ambiguous(if not Virtual base class )
        Person::display();
        cout << "I am Manager display" << endl;
    }
};

int main(){
    Manager m;
    m.display();
}