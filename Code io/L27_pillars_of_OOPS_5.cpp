//Compile time polymorphism : Operator overloading
#include<iostream>
using namespace std;

// Operator Overloading = giving extra meaning to existing operators
// for user defined classes
// Syntax: returnType operator<symbol>(parameters){ }

class Money{
    public:
    int amount;

    Money(int amount)
    {
        this->amount=amount;
    }
    Money operator-(const Money &obj)
    {
        return (amount-obj.amount);     //operator1-operator2
    }
    bool operator==(const Money &obj)
    {
        return (amount==obj.amount);
    }
    void display()
    {
        cout<<"Amount :"<<amount<<endl;
    }
};

int main(){
    Money m1(300);
    Money m2(200);

    Money m3 = m1 - m2;
    m3.display();
}

/*
Key rules:
1. Cannot overload these operators:
::    .    .*    ?:    sizeof
*/