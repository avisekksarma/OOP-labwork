// 1. Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function

#include <iostream>
#include<iomanip>

using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

void displayDate(Date date);

int main()
{
    Date date;
    cout<<"Enter the date in month,day,year format: "<<endl;
    cin>>date.month>>date.day>>date.year;
    displayDate(date);
    return 0;
}

void displayDate(Date date)
{
    cout<<setw(2)<<date.month<<"/"<<setw(2)<<date.day<<"/"<<setw(4)<<date.year<<endl;
}  