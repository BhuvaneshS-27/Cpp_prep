#include<iostream>
using namespace std;
int main(){

    //Loops are used to execute a block of code repeatedly until a condition becomes false.

    //S1:while loop -entry control loop
    int n=5 ;   //boundary
    int i=1;    //iterator - initialize
    while(i<=n) //condition check
    {
        cout<<i<<endl;  //print 
        i++;            //update
    }


    //S2 : Do while loop - exit control loop
    int j=1;
    do //condition check
    {
        cout<<j<<endl;  //print 
        j++;            //update
    }while(j<=n);
    


    //S3:reverse looping 
    int k=5;
    n=1;
    do //condition check
    {
        cout<<k<<endl;  //print 
        k--;            //update
    }while(k>=n);



    //S4: Task - input should be taken until "Q" is entered
    char c;
    do{
        cout<<"Enter a Character:";
        cin>>c;
        cout<<"you entered "<<c<<endl;
    }while(c!='q');

    
}