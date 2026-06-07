
#include<iostream>
using namespace std;

int After5(int,int);  //Function declaration (optional)- datatype only enough

int main(){

/*    A function is a reusable block of code that performs a specific task.

    steps in a function 
        i)declaration 
        ii)definition 
        iii)calling
*/
int age=24;
cout<<After5(age,2)<<endl;      //function calling :func(arguments)
cout<<After5(20,7)<<endl;

}

int After5(int age, int b){

    cout<<"age after "<<b<<" years :"<<age + b<<endl ;
    return age + b;
}


//function parameters - inputs of a function