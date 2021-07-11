// 4. Write a class Date that uses pre increment and post increment operators to add 1 to the day in the Date object, while causing appropriate increments to the month and year (use the appropriate condition for leap year). The pre and post increment operators in your Date class should behave exactly as the built in increment operators.

#include <iostream>

using namespace std;

class Date
{
    int day, month, year;
    static int days31Month[7];
    static int days30AND28Month[5];

public:
    Date(int d = 0, int m = 0, int y = 0) : day(d), month(m), year(y) {}
    bool isLeapYear()
    {
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        {
            return true;
        }
        return false;
    }
    bool isInThisArray(int data, int *array, int arraySize)
    {
        for (int i = 0; i < arraySize; i++)
        {
            if (data == array[i])
            {
                return true;
            }
        }
        return false;
    }

    const Date &operator++()
    {
        if (day == 28 and month == 2)
        {
            if (isLeapYear())
            {
                ++day;
            }
            else
            {
                day = 1;
                month = 3;
            }
        }
        else if (day == 30 and isInThisArray(month, days30AND28Month, 5))
        {
            day = 1;
            month = month + 1;
        }
        else if (day == 31 and isInThisArray(month, days31Month, 7))
        {
            if (!(month == 12))
            {
                day = 1;
                month = month + 1;
            }
            else
            {
                month = 1;
                day = 1;
                ++year;
            }
        }
        else
        {
            // for other cases than the end days of month case.
            ++day;
        }

        return *this;
    }
    Date operator++(int i)
    {
        Date temp = *this;
        this->operator++();
        return temp;
    }

    void display()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int Date::days31Month[7] = {1, 3, 5, 7, 8, 10, 12};
int Date::days30AND28Month[5] = {2, 4, 6, 9, 11};

int main()
{
    Date d1(28, 2, 2017);
    Date d2(31, 12, 2018);
    Date d3;
    d1.display();
    d2.display();
    cout << "After increment: " << endl;
    ++d1;
    d3 = d2++;
    d1.display();
    d2.display();
    d3.display();
    return 0;
}