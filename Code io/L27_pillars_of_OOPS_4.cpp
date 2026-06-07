
//Third pillar :Polymorphism
//Compile time polymorphism : function overloading 

#include<iostream>
using namespace std;


// Polymorphism = same name, different behavior
// Compile Time Polymorphism = decided at COMPILE time (static binding)
//      |=> Function Overloading
//      |=> Operator Overloading

// ─────────────────────────────────────────
//  FUNCTION OVERLOADING
//  Same function name, different parameters
// ─────────────────────────────────────────

int sum(int a , int b)
{
    return a+b;
}

float sum(int a , float b)
{
    return a+b;
}

int sum(int a ,int b, int c)
{
    return a+b+c;
}

int main(){

    cout<<sum(2,3)<<endl;
    cout<<sum(2,3,4)<<endl;
    cout<<sum(5,3.14f)<<endl;  
    // NOTE : a simple decimal like 3.14 is considered as "Double" datatype by default
    //So we need to mention it as 3.14f - this specifies it as "float" datatype 


    
}

// Function Overloading means having multiple functions with 
// the same name but different parameter lists.


// Rules — functions must differ in:

// Number of parameters, OR
// Type of parameters

