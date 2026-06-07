#include<iostream>
using namespace std;
int main(){
    int a=45;
    int b=0;
    

    //using try catch block
    try{
        if(b==0)
            throw 0;
        int c=a/b;
    }
    catch(int e){
        cout<<"Divide by zero error :"<<e<<endl;
    }

}