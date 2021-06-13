// 1. Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function

#include <iostream>

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
    date.month = 11;
    date.day = 28;
    date.year = 2004;

    displayDate(date);
    return 0;
}

void displayDate(Date date)
{
    cout<<date.month<<"/"<<date.day<<"/"<<date.year<<endl;
}  