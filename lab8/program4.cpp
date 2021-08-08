// 4. Write a program that stores the information about students (name, student id, department, and address) in a structure and then transfers the information to a file in your directory. Finally, retrieve the information from your file and print it in the proper format on your output screen.

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

struct Student
{
private:
    char name[20];
    int id;
    char department[20];
    char address[20];

public:
    Student()
    {
        strcpy(name,"");
        id =0;
        strcpy(department,"");
        strcpy(address,"");
    }
    Student(const char *n, int id, const char *d, const char *a)
    {
        strcpy(name, n);
        this->id = id;
        strcpy(department, d);
        strcpy(address, a);
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Address: " << address << endl;
    }
};

int main()
{
    Student s1("Avisek", 1, "BCT", "Pokhara");
    ofstream file;
    file.open("./db.txt");
    file.write(reinterpret_cast<char *>(&s1), sizeof(s1));
    file.close();
    ifstream fin;
    fin.open("./db.txt");
    Student s2;
    fin.read(reinterpret_cast<char *>(&s2), sizeof(s2));
    s2.display();
    return 0;
}