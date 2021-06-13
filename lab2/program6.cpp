// 6. Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are:

// Chief executive officer Rs. 35000/m

// Information officer Rs. 25000/m

// System analyst Rs. 24000/m

// Programmer Rs. 18000/m

// Make function that takes two arguments; one salary and other increment. Use proper default argument.

#include <iostream>

using namespace std;

float display(float salary,float increment = 0.12f){
    return salary+salary*increment;
}

int main(){
    float ceo=35000;
    float io=25000;
    float sa=24000;
    float p=18000;
    cout<< display(ceo,0.09)<<" "<< display(io,0.1)<<" "<<display(sa)<<" "<<display(p);
    return 0;
}

