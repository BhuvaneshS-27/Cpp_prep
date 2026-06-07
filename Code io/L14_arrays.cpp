
#include <iostream>
#include<string>

using namespace std;
int main(){

    // Array - to store similar data in one variable
    string name = "goms";
    string names[5]={"bhu", "goms", "ravi", "karthi","pandi"}; //initializing an array
    int ages[5]={20,30,12,4,0};
    
    cout<<names[0]<<endl;  //0 based indexing 
    names[2][2]='W';     //able to edit with indexing

    cout<<names[2]<<endl;

    //S2:To print entire array
    cout<<"To print entire array :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<names[i]<<endl;
    }

    //S3: to find the no of elements in an array
    //int size = names.size() //this doesn't work for arrays, works only for no of characters in a string 

    int size = sizeof(names)/sizeof(names[0]);
    cout<<"Size of array is :"<<size<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<names[i]<<endl;
    }    

    //S4: for each loop 
    for (int i:ages)
    {
        cout<<i<<endl;
    }


}