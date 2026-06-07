#include<iostream>
#include<string>
using namespace std;

//named structures
struct student{         //structure definition -custom datatype 
    string name;        //structure members
    int age;
    float cgpa;
}goms,bhuva;            //structure variables

// also new variables can be declared in "student" datatype
student ravi;
student raju;



//NOTE : the below format is also allowed
//C++ also allows creating a struct without giving the datatype a separate name.
struct
{
    int age;
    string name;
} s1,s2;

//but further variables cannot be declared




 //S2 : Enumeration - enum
//It is a user-defined datatype used to represent a fixed set of named values.

enum day{Sunday=4, Monday , Tuesday , Wednesday, Thursday , Friday, Saturday};  // Now starts from 4,5,6...
//by default :0 , 1      , 2       ,3         ,4         ,5      ,6

//Since initialized with 4 , it continues as 5,6,7...




    

int main(){
    //Structures - struct
    //A struct is a user-defined data type that lets you group multiple related variables together.
    student class10[30];    //creating an array of structures

    goms.name="Goms";
    goms.age=24;
    goms.cgpa=9.2;

    cout<<goms.name<<endl;

   cout<<"enums:"<<endl;
    day TODAY = Sunday; // stores '0' in Today
    day Day_after_tomorrow = Tuesday;

    cout<<TODAY<<endl;
    cout<<Day_after_tomorrow<<endl;

    //accessing for comparison 
    if (TODAY+1==Monday)
    {
        cout<<"Today is Holiday"<<endl;
    }

}