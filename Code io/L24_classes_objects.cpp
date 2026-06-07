#include<iostream>
#include<string>
using namespace std;

//very similar to structures
class student {
   public: //access specifier
    int roll_no; //attributes
    string name; //attributes

    //2 methods to declare a function
    //method 1 : defining method inside the class
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"roll_no :"<<roll_no<<endl;
    }
    void greetname(string);   //function declaration

};

//method 2 defining method outside class
void student::greetname(string greet){      //function definition
                                //:: - scope resolution operator
    cout<<greet<<name<<endl;

}

int main(){

    student bhuva;   //object - instance (instantiation)
    bhuva.roll_no=39;
    bhuva.name= " Bhuvanesh";

    cout<<bhuva.name<<endl;
    bhuva.display();
    bhuva.greetname("hello");
}
/*

OOPS - classes & objects 

Classes - blueprint / Template
Object - instance

DRY - Don't Repeat Yourself

OOP - object oriented programming 
    -object - to simulate real world objects
        |==>Methods and variables 

Procedural Programming 
    -functions
    -act on data
function - procedure
function inside object - method 
*/

