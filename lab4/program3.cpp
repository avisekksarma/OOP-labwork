// 3. Write a class that can store Department ID and Department Name with constructors to initialize its members. Write destructor member in the same class and display the message "Object n goes out of the scope". Your program should be made such that it should show the order of constructor and destructor invocation.


#include <iostream>
#include <cstring>

using namespace std;
class Department
{
private:
    int id;
    char *name;

public:
    Department(int i, const char *n)
    {
        
        id = i;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        cout << "Object " << id << " is constructed." << endl;
    }
    ~Department()
    {
        cout << "Object " << id << " goes  out of scope." << endl;
        delete[] name;
    }
};
int main()
{
    Department d1(1, "ABC");
    Department d2(2, "XYZ");
    return 0;
}