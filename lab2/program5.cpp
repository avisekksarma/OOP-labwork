// 5. Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline function to display the net payment to the employee by the company.

#include <iostream>

using namespace std;

inline float display(float salary)
{
    return salary - salary * 0.1;
}

int main()
{
    float salary;
    cout << "Enter salary: " << endl;
    cin >> salary;
    cout << "Net payment to the employee: " << display(salary) << endl;
    return 0;
}