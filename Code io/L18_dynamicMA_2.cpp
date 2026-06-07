//static memory allocation

#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter the no of students :";
    cin>>num;

    int marks[num];
    cout<<"enter their marks :";
    for(int i =0; i<num ; i++)
    {
        cin>>marks[i];
    }

    cout<<"printing individual marks :";
        for(int i =0; i<num ; i++)
    {
        cout<<marks[i]<<" ";
    }

    //Your int marks[num] is a Variable Length Array (VLA). 
    //VLAs live on the stack, and stack memory is managed automatically by the compiler.
    // Even though the size is decided at runtime, you have no control over its lifetime 
    //or deallocation — so it is not dynamic allocation.



}