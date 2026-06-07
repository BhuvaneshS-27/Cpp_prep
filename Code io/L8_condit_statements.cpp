#include<iostream>
using namespace std;
int main() {
/*
Types of Conditional Statements
if
if-else
else if
Nested if 
ternary operator
switch
*/

int age = 64;

if (age<18)
cout<<"you are a child"<<endl;
else 
cout<<"you are an adult"<<endl;

// else if ladder

if(age<18)
cout<<"you are a child"<<endl;
else if (age>60)
cout<<"you are a senior citizen"<<endl;
else
cout<<"you are an adult"<<endl;


//S2 : Ternary operators
int salary=30000;
(salary>50000)?cout<<"You are rich"<<endl:cout<<"you are poor"<<endl;

//S3 :switch statements
int day=5;

switch(day)
{
    case 1:cout<<"Sunday"<<endl;break;
    case 2:cout<<"monday"<<endl;break;
    case 3:cout<<"tuesday"<<endl;break;
    case 4:cout<<"wednesday"<<endl;break;
    default:cout<<"Some other day"<<endl; break;
}

}