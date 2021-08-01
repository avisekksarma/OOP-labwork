// 3. Write a program with an abstract class Student and create derive classes Engineering, Medicine and Science from base class Student. Create the objects of the derived classes and process them and access them using an array of pointers of type base class Student.
#include <iostream>
using namespace std;
#include <string.h>

class Student
{
    char *name;
    int age;

public:
    Student(const char *n, int age)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        this->age = age;
    }
    virtual ~Student()
    {
        delete[] name;
    }
    virtual void displaySub() = 0;
};

class Engineering : public Student
{
    const char *sub = "Engineering";

public:
    Engineering(const char *n, int age) : Student(n, age)
    {
    }
    void displaySub()
    {
        cout << sub << endl;
    }
};

class Medicine : public Student
{
    const char *sub = "Medicine";

public:
    Medicine(const char *n, int age) : Student(n, age)
    {
    }
    void displaySub()
    {
        cout << sub << endl;
    }
};

class Science : public Student
{
    const char *sub = "Science";

public:
    Science(const char *n, int age) : Student(n, age)
    {
    }
    void displaySub()
    {
        cout << sub << endl;
    }
};

int main()
{
    Engineering e("Avisek", 20);
    Medicine m("Sam", 21);
    Science s("Bob", 19);
    Student *sp[3];
    sp[0] = &e;
    sp[1] = &m;
    sp[2] = &s;
    for (int i = 0; i < 3; i++)
    {
        sp[i]->displaySub();
    }
    return 0;
}