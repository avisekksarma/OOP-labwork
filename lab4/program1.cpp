// 1. Write a program that has a class to represent time. The class should have constructors to initialize data members hour, minute and second to 0 and to initialize them to values passed as arguments. The class should have member function to add time objects and return the result as time object. There should be another function to display the result in 24 hour format.

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
class Time
{
public:
    Time()
    {
        hour = min = secs = 0;
    }
    Time(int h, int m, int s)
    {
        hour = h;
        min = m;
        secs = s;
    }
    Time add(const Time &other)
    {
        Time newTime;
        newTime.hour = hour + other.hour;
        newTime.min = min + other.min;
        newTime.secs = secs + other.secs;
        return newTime;
    }
    void displayin24HrsFormat()
    {
        cout << "Time (24 hrs)= " << setw(2) << hour << ":" << setw(2) << min << ":" << setw(2) << secs << endl;
    }
    void displayin12HrsFormat()
    {
        int tempHr;
        char amorpm[3];
        if (hour > 12)
        {
            tempHr = hour - 12;
            strcpy(amorpm, "pm");
        }
        else if (hour == 0)
        {
            tempHr = 12;
            strcpy(amorpm, "am");
        }
        else if (hour == 12)
        {
            tempHr = 12;
            strcpy(amorpm, "pm");
        }
        else
        {
            tempHr = hour;
            strcpy(amorpm, "am");
        }
        cout << "Time (12hrs) = " << setw(2) << tempHr << ":" << setw(2) << min << ":" << setw(2) << secs << " " << amorpm << endl;
    }

private:
    int hour, min, secs;
};
int main()
{
    Time t1;
    t1.displayin24HrsFormat();
    t1.displayin12HrsFormat();
    Time t2(17, 20, 45);
    t2.displayin24HrsFormat();
    t2.displayin12HrsFormat();
    Time t3 = t1.add(t2);
    t3.displayin24HrsFormat();
    t3.displayin12HrsFormat();
    return 0;
}