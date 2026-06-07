#include<iostream>
#include<string>

using namespace std;

void add5(string greet,int num=2){//default arguement - num = 2
                                  //default arguements should be present at last(or else compilation error)
    
    cout<<greet<<" "<<num+5<<endl;
}

int main(){
    add5("Hi" , 6);
    add5("hello ");


}