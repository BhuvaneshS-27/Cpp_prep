#include<iostream>
using namespace std;

void Add5(int arr[],int size)        //When you pass an array to a function, it decays into a pointer
{                                   //so we need to pass the size as a pointer

    for(int i=0;i<size;i++)
    arr[i]+=5;

}

int main(){

    int numar[]={1,2,3,4,5};
    int size = sizeof(numar)/sizeof(numar[0]);

    Add5(numar,size);   //always carry the size alongside the array when passing to functions.
    for(int i=0;i<size;i++)
    cout<<numar[i]<<" ";
    
}