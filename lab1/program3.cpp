#include <iostream>

using namespace std;

struct Student
{
    char name[100];
    float marks;
};

int main()
{
    Student s[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter your name: "<<endl;
        cin >> s[i].name;
        cout << "Enter the marks: "<<endl;
        cin >> s[i].marks;
    }
    cout <<"The entered info is as follows: \n\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Name"<<"["<<i+1<<"]: "<< s[i].name<<endl;
        cout << "Marks"<<"["<<i+1<<"]: "<< s[i].marks<<endl;
    }
    return 0;
}