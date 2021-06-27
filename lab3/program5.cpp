// 5. Assume that an object represents an employee report that contains the information like employee id, total bonus, total overtime in a particular year. Use array of objects to represent n employees' reports. Write a program that displays report. Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the reports according to parameter passed. Display the report in following format.
// Employee with ... ... ... has received Rs ... ... ...as bonus

// and

// had worked ... ... ... hours as a over time in  year ... ... ...

#include <iostream>

using namespace std;

class EmpReport
{
public:
    void setpara(int empId, int y, float b, float otinHrs)
    {
        id = empId;
        year = y;
        bonus = b;
        overtimeInHrs = otinHrs;
    }
    void displayreport()
    {
        cout << "Employee with id= " << id << " has received Rs." << bonus << " as bonus.\n"
             << "The Employee had worked " << overtimeInHrs << " hours as overtime in year " << year << endl;
    }

private:
    int id;
    int year;
    float bonus;
    float overtimeInHrs;
};

int main()
{
    EmpReport n[2];
    int id;
    int year;
    float bonus;
    float overtimeInHrs;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter id,year,bonus,overtime hours of emp:(" << i + 1 << ")" << endl;
        cin >> id >> year >> bonus >> overtimeInHrs;
        n[i].setpara(id, year, bonus, overtimeInHrs);
    }

    for (int i = 0; i < 2; i++)
    {
        n[i].displayreport();
    }
    return 0;
}
