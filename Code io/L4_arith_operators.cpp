
#include<iostream>
using namespace std;

int main(){
    //Arithmetic operators 
    // +,-,*,/,%, ++ , --

    int a,b;
    a=2;b=3;
 
    int sum= a+b;
    int diff =a-b;
    int prod = a*b;
    float div=a/b; //division operator - integer division 
    int rem =a%b;

    float c=5;
    int d= 3;

    float div_frac= c/d ; // floating division
    // or float div=float(a)/b;  // this is explicit type conversion
    // int a = 6.7 ; value gets stored as a=6 , - this is implicit (self) conversion 

cout << "sum:" << sum << endl;
cout << "diff :" << diff << endl;
cout << "Product :" << prod << endl;
cout << "div :" << div << endl;  //division operator - integer division 
cout << "floating div :" << div_frac << endl; 
cout << "rem : "<<rem << endl;
cout << "a :"<<a<<endl;
a++;    //post increment
cout << "a++ :"<<a<<endl;
}