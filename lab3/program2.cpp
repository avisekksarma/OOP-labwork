// 2. Assume that you want to check whether the number is prime or not. Write a program that asks for a number repeatedly. When it finishes the calculation the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object class concept.

#include <iostream>

using namespace std;

class Prime{
    public:
    void askInputAndCalc(){
        char again;
        do {
            cout<<"Enter to check a number if it is prime: "<<endl;
            cin>>n;
            if(checkPrime()){
                cout<<n<<" is prime"<<endl;
            }else{
                cout<<n<<" is not prime"<<endl;
            }
            cout<<"Another number? (y/n)"<<endl;
            cin>>again;
        }while(again=='y' || again=='Y');
    }
    bool checkPrime(){
        
        for(int i =2;i<n/2;i++){
            if(n/i == n/(float)i){
                // not prime
                return false;
            }
        }
        return true;
    }
    private:
    int n;
};

int main(){
    Prime p;
    p.askInputAndCalc();
    return 0;
}