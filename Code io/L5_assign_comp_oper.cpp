
#include <iostream>
using namespace std;

int main(){
    //assignment operators
    // = , +=, -=, /=, *= , %=

    int age = 24;
    age +=5;  // means age = age + 5;  // addition assignment 
    cout<<age<<endl;

    age-=2; // subtraction assignment 
    cout<<age<<endl;
    age = age*6;
    age *= 6 ;// multiplication assignment
    age = age/6;
    age /= 6; // division assignment
    age = age%10;
    age %= 10;

    //S2 : comparison operators
    // >, < , >= , <= , ==, != 

    int n1= 56, n2 =45;
    cout <<(n1 >n2);
    

}