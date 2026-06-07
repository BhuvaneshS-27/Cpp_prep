
#include<iostream>
using namespace std;
int main(){

/*
To print the below pattern:
****
****
****
****
*/

    for (int i=0; i<4;i++)      //rows are handled by outer loop
    {
        cout<<"row :"<<i+1<<endl;
        for(int j=0; j<4;j++)   //columns are handled by inner loop
        {
            cout<<"*";
        }
        cout<<endl;
    }



//S2: Nested conditional statements 
    int age =90;
    char gender = 'F';

    if ( age <18)
    {
        if(gender=='M')
        {
            cout<<"Boy"<<endl;
        }
        else if(gender=='F')
        {
            cout<<"girl"<<endl;
        }
    }
    else if(age>=18)
    {
        if(gender=='M')
        {
            cout<<"man"<<endl;
        }
        else if (gender=='F')
        {
            cout<<"woman" << endl;
        }
    }
}