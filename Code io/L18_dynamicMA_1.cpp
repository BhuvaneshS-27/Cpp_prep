#include<iostream>
using namespace std;
int main(){

    int age = 24 ; //compile time memory allocation

    //Dynamic Memory allocation - Allocating memory during runtime
    int *ptr;
    ptr = new int;  //runtime allocation of memory of integer size (its address is pointed to ptr)

    *ptr=24;

    cout<<"value :"<<*ptr<<endl;
    
    delete ptr;

}