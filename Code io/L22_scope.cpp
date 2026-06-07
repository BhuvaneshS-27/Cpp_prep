
#include<iostream>
using namespace std;

int a = 56;         //global variable
void print()
{
    int a = 6;      //local variable  - high priority
    cout<<a<<endl;
}
int main(){

    print();
    cout<<a<<endl;

}