
#include<iostream>
using namespace std;

int fact(int n){
    if(n==1)        //Base Case – the condition that stops recursion.
        return 1;
    else
        return n*fact(n-1); //Recursive Call – the function calls itself with a smaller problem.
}


int SumofN(int N){
    if(N==1)
        return 1;
    else
        return N+ SumofN(N-1);
}


int main(){
    cout<<fact(5)<<endl;
    cout<<SumofN(5)<<endl;
}

//Recursion is a technique where a function calls itself to solve a problem.

//Instead of using loops, a recursive function breaks a problem into 
//smaller versions of the same problem.

//When recursion happens, each function call is stored in memory on the call stack.