
#include<iostream>
using namespace std;

void Add5(int num)      //call by value
{
    num+=5;
    cout<<num<<endl;
}

void Sub5(int &num)     //call by reference
{
    num-=5;
    cout<<num<<endl;
}
int main(){

    int num1 = 6;
    Add5(num1);
    cout<<num1<<endl;

    int num2=27;
    Sub5(num2);
    cout<<num2<<endl;

}