
#include<iostream>
#include<string>
using namespace std;

class Bankaccount{
    private:            //DATA is hidden from outside
    string owner;
    double balance;
    int pin;

    public:             //Controlled access through methods 

    //Constructor to initialize account
    Bankaccount(string owner , double balance , int pin)
    {
        this->owner=owner;
        this->balance=balance;
        this->pin=pin;
    }

    //GETTER - read balance only if pin is correct
    double getBalance(int enteredPin)
    {
        if(enteredPin==pin){
            return balance;
        }
        else 
        {
            cout<<"Wrong pin"<<endl;
            return -1;
        }

    }

    //SETTER - deposit only positive ammounts
    void deposit(double amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<"Deposited :"<<amount<<endl;
        }
        else
            cout<<"Invalid Deposit amount"<<endl;

    }

    //SETTER - withdraw only sufficient balance + correct pin
    void withdraw(double amount, int enteredPin)
    {
        if ( enteredPin!=pin)
        {
            cout<<"wrong Pin !"<<endl;
        }
        else if( amount > balance)
        {
            cout<<"Insufficient Balance"<<endl;
        }
        else
        {
            balance-=amount;
            cout<<"withdrawn amount :"<<amount<<endl;
        }
    }

    void displayOwner()
    {
        cout<<"account Owner :"<<owner<<endl;
    }


};



int main(){
    Bankaccount acc1("Bhuvanesh",5000,1234);
    acc1.displayOwner();

    //trying to access private data Directly - compiler error
    //acc1.balance=100000;    //Not Allowed
    //acc1.pin=0000;          //Not Allowed

    //Correct way - through public methods 
    acc1.deposit(1000);
    cout<<"Balance :"<<acc1.getBalance(1234)<<endl;

    acc1.withdraw(500,9999);    //Wrong PIN - can't withdraw 
    acc1.withdraw(500,1234);    //Correct Pin

    cout<<"Balance :"<<acc1.getBalance(1234)<<endl;

}

/* 
Pillars of OOPS
    -Encapsulation
    -Inheritance 
    -Polymorphism
    -Abstraction

Encapsulation : 
// Encapsulation = Binding data (variables) and methods (functions) together
// + restricting direct access to data using access specifiers
*/