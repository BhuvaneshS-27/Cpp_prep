#include<iostream>
using namespace std;

//References(only in cpp) and pointers 

//References - a reference is another name (alias) for an existing variable.
//a reference points to the same memory location

int main(){

    int age = 24;
    int &aliasAge = age;

    cout<<age<<endl;
    cout<<aliasAge<<endl;

    cout<<"After Modification :"<<endl;

    aliasAge=aliasAge+2;

    cout<<age<<endl;

    cout<<"original address :"<<&age<<endl;
    cout<<"original address :"<<&aliasAge<<endl;

    //&age gives the address of a variable
cout<<"Pointers :"<<endl;
    //S2 : Pointers 
    //A pointer is a variable that stores the memory address of another variable.
    int *ptr ;   //integer pointer declaration
    ptr = &age;  // initialization

    //another way
    int *ptr1 = &age;

cout<<"ptr :"<<ptr<<endl;
cout<<"*ptr:"<<*ptr<<endl; //* - dereferencing operator 

//Internally reference has been implemented using pointers

*ptr=56;
cout<<"Age - After value change using pointer :"<<age;



    

}
