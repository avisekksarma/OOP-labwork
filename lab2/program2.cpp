// 2. Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above.

#include <iostream>

using namespace std;

void feetToInches();
void feetToInches(float & feet);
void feetToInches(float feet1,float feet2);


int main(){
    float feetValue = 3.0f;

    feetToInches();
    feetToInches(feetValue);
    feetToInches(10,4);

    return 0;
}

void feetToInches(){
    cout<<"Called function 1"<<endl;
    float feet;
    cout<<"Enter a feet value to be converted to inches: "<<endl;
    cin >> feet;
    cout <<"Equivalent inch value: "<< feet * 12<<endl;
}

void feetToInches(float & feet){
    cout<<"Called function 2"<<endl;
    cout <<"Equivalent inch value: "<< feet * 12<<endl;
}

void feetToInches(float feet1,float feet2){
    cout<<"Called function 3"<<endl;
    cout <<"Equivalent inch value(1) : "<< feet1 * 12<<endl;
    cout <<"Equivalent inch value(2) : "<< feet2 * 12<<endl;
}