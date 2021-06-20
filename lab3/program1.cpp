// 1. Write a simple program that convert the temperature in degree Celsius to degree Fahrenheit and vice versa using the basic concept of class and object. Make separate class for Centigrade and Fahrenheit which will have the private member to hold the temperature value and make conversion functions in each class for conversion from one to other. For example you will have function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.
 
#include <iostream>

using namespace std;

class Celsius{
    public:
    float toFahrenheit(){
        return ((9/5.0)* temp)+32;
    }
    void setData(float t){
        temp = t;
    }
    private:
    float temp;
};

class Fahrenheit{
    public:
    float toCelsius(){
        return (5/9.0)*(temp - 32.0);
    }
    void setData(float t){
        temp = t;
    }
    private:
    float temp;
};

using namespace std;
int main(){
    Celsius c;
    c.setData(40);
    cout << "celsius to fah:" << c.toFahrenheit()<<endl;

    Fahrenheit f;
    f.setData(30);
    cout<<"Fah to celsius: "<<f.toCelsius()<<endl;
    return 0;
}