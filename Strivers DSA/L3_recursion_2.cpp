#include<bits/stdc++.h>
using namespace std;

void sumofN(int n,int sum)
{
    if(n<1)
    {
        cout<<"Sum :"<<sum<<endl;
        return;
    }
    sumofN(n-1,sum+n);
}

int sumofN_functional(int n){
    if(n==1)
    return 1;
    else
    return n+sumofN_functional(n-1);

}

int factofN(int n)
{
    if(n==1)
    return 1;
    return n*factofN(n-1);
}

int main(){

    //print the sum of N natural numbers:parameterised recursion
    sumofN(5,0);

    //print the sum of N natural numbers:functional recursion
    cout<<sumofN_functional(3)<<endl;
    //f(3)=3+f(2)=3+2+f(1)=3+2+1

    //print factorial of N
    cout<<"N Factorial "<<factofN(5)<<endl;
}