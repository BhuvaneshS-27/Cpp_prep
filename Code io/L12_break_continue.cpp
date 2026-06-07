#include<iostream>
using namespace std;
int main(){
    cout<<"break output : "<<endl;
    //S1:The break statement immediately stops the loop.
    for (int i=1;i<=20;i++){
        if(i==5)
        break;
        cout<<i<<endl;

    }
    cout<<"continue output:"<<endl;
    //S2:The continue statement skips the current iteration and moves to the next iteration.
    for (int i=1;i<=20;i++){
        if(i==5)
        continue;
        cout<<i<<endl;

    }

}