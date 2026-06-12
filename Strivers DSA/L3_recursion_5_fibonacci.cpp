//Multiple recursion calls 
#include<bits/stdc++.h>
using namespace std;

//Fibonacci series : 0,1,1,2,3,5,8,13,21,34..
        //Index:     0,1,2,3,4,5,6,7, 8, 9

int fibonacci(int n)    //TC: O(2^n)
{
    if(n<=1)
    return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){

//find the Nth fibonacci number
//f(5)=f(4)+f(3)
cout<<fibonacci(9);

}