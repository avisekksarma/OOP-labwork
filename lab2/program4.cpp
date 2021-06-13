// 4. Write a function that passes two temperatures by reference and sets the larger of the two numbers to 100 by using return by reference.

#include <iostream>

using namespace std;

int & max(int & temp1, int& temp2);

int main(){
    int temp1=30,temp2=64;
    max(temp1,temp2) = 100;
    cout << "The values now are: "<<endl<<"Temp1= "<< temp1<<endl<<"Temp2= "<< temp2 <<endl;
    return 0;
}

int & max(int& temp1, int& temp2){
    return temp1>temp2?temp1:temp2;
}