
#include<iostream>
#include<iomanip> //i/o manipulation - used to set precision in double datatype 
#include<string>  // necessary to use string datatype 

using namespace std;
int main(){

    // Datatype 
    // i) int - integer - -ve , 0, +ve 
    int age;
    cout<<"Enter your age :";
    cin>>age;
    cout<<"your age is "<<age<<endl;


    // ii)float- decimal point numbers
    float cgpa;
    cout<<"enter CGPA:";
    cin>>cgpa;
    cout<<"your CGPA is :"<<cgpa<<endl;
    //we can also use scientific notation
    float years= 9.5e2;
    cout<<"Years:"<<years<<endl;



    //ii) double -decimal (floating-point) numbers with high precision.
    double pi=3.1415161718;
    cout <<pi<<endl;
    cout<<fixed<<setprecision(10);  // mention the no of digits after decimal point
    cout<<pi<<endl;


    //iii)bool - The bool data type is used to store logical values.

    bool isAdult = true;
    cout<<isAdult<<endl;


    //iv) char - The char data type is used to store a single character.
    char gender = 'M';
    cout<<gender<<endl;
    char letter = 65;
    cout<<letter<<endl;

    //v)string - used to store multiple characters (text)
    string greetings = "hi everyone";
    cout<<greetings<<endl;

    //S2 : size of each datatype
    int arrear = 24;
    float gpa = 9.8;
    double Pi = 3.1415161718;
    bool isCow = false;
    char rate = 'M';

    cout<<"Size of integer :"<<sizeof(age)<<endl;
    cout<<"float :"<<sizeof(gpa)<<endl;
    cout<<"double : "<<sizeof(pi)<<endl;
    cout<<"bool : "<<sizeof(isCow)<<endl;
    cout<<"char : "<<sizeof(rate)<<endl;

}