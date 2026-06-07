#include<iostream>
using namespace std;
int main(){
    // variables - container to store data 
    // different datatypes - different container
    // Identifier - label 

    int           age;    //declaration
    //(datatype)  (identifier)
    cout<<"Value before assigining :"<<age<<endl;
    age = 24; //initialisation - assigining a value 
    cout<<"Value after assigining :"<<age<<endl;
    age = 25; //updation

    int fire = 24; //declaation + initialization
    /*
Rules for creating an Identifier
- only alphabets, numbers and
- case sensitive
- can start with letters or_
- variables should not be a keyword ( words with a special meaning)
*/


//S2:declaring multiple variables 
int num1;
int num2;
//or 
int num3,num4;


// S3: multiple initialisation 
num1=num2=9;

//S4 : Constant declaration
// constant is a value that cannot be changed once it has been assigned.

//type 1 : Using Constant keyword
const int x = 20;

cout<<" The constant value is :"<<x;

//type 2: Using #define (Preprocessor constant)
#define PI 3.14

cout<<"The constant is :"<<PI;


}