//Abstraction-hiding unwanted details

//CLAUDE:
// Abstraction = Hiding complex implementation details
//               and showing only essential features to the user
//
// Real world example:
//      Car — you press accelerator, you dont know how fuel injection works
//      ATM — you press withdraw, you dont know the bank's backend logic
//
// Achieved in C++ using:
//      |=> Access specifiers (private/protected hiding internals)
//      |=> Abstract class (pure virtual functions)

//Case I :Using Access specifiers
#include<iostream>
using namespace std;

class remote {
    private:
    void turnOn(){
        cout<<"Turning ON"<<endl;
    }
    public:
    void on(){
        turnOn();
        cout<<"remote ON"<<endl;
    }
};

int main(){
    remote r;
    r.on();
}
