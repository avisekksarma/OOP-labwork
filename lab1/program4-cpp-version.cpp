#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Student
{
    char name[20];
    int roll;
    char address[20];
    long int phoneNumber;
};

int main()
{
    const int numberOfStudents = 3;
    Student s[numberOfStudents];
    ofstream outfile;
    outfile.open("file.txt", ios::out);
    for (int i = 0; i < numberOfStudents; i++)
    {
        cout << "Enter your name: " << endl;
        cin >> s[i].name;
        outfile << s[i].name << endl;
        cout << "Enter the roll number: " << endl;
        cin >> s[i].roll;
        outfile << s[i].roll << endl;
        cout << "Enter your address: " << endl;
        cin >> s[i].address;
        outfile << s[i].address << endl;
        cout << "Enter your phone number: " << endl;
        cin >> s[i].phoneNumber;
        outfile << s[i].phoneNumber << endl;
    }
    outfile.close();

    cout << "Reading from the file...." << endl;
    ifstream infile;
    infile.open("file.txt");
    for (int i = 0; i < numberOfStudents; i++)
    {
        infile >> s[i].name;
        infile >> s[i].roll;
        infile >> s[i].address;
        infile >> s[i].phoneNumber;
    }
    int result;
    for (int i = 0; i < numberOfStudents-1; i++)
    {
        for (int j = 0; j < numberOfStudents-1-i; j++)
        {
            result = strcmp(s[j].name, s[j + 1].name);
            if (result <= 0)
            {
                continue;
            }
            else
            {
                Student temp = s[j];
                s[j]=s[j+1];
                s[j+1] = temp;
            }
        }
    }

    cout << "\n\nFinal output:\n";
    for (int i = 0; i < numberOfStudents; i++)
    {
        cout << s[i].name<<"\t";
        cout << s[i].roll<<"\t";
        cout << s[i].address<<"\t";
        cout << s[i].phoneNumber<<"\t";
        cout <<"\n";
    }
    return 0;
}
