#include<iostream>
using namespace std;
/*
Has-A Relationship
A Has-A relationship represents Composition (or Aggregation) in Object-Oriented Programming.
It means:
"One class contains an object of another class as one of its members."

Examples
A Car has an Engine.
A Computer has a CPU.
A House has a Room.
A Student has a Laptop.

*/
class Laptop{
    public:
    void turnOn(){
        cout<<"laptop turned ON"<<endl;
    }

};

class Student{
    private:
    Laptop laptop;
    public:
    void study(){
        laptop.turnOn();
        cout<<"Student started studying"<<endl;
    }
};

int main()
{
    Student s;
    s.study();

}