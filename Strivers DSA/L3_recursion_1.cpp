#include <bits/stdc++.h>
using namespace std;

void printname(int n)
{
    if (n>0)
    {
    cout<<"Bhuvanesh"<<endl;
    n--;
    printname(n);
    }
    else
    return;
    
    

}
void print1toN(int i,int N)
{
    if(i>N)
    return;
    cout<<i<<endl;
    print1toN(i+1,N);


}

void printNto1(int N)
{
    if(N==0)
    return;
    cout<<N<<endl;
    printNto1(N-1);

}

void print1toN_by_back_track(int N)
{
    if(N<1)
    return;
    print1toN_by_back_track(N-1);
    cout<<N<<endl;


}

void printNto1_by_back_track(int i ,int N)
{
    if (i>N)
    return;
    printNto1_by_back_track(i+1,N);
    cout<<i<<endl;

}

int main(){

    //print name N times using recursion 
    printname(5);

    //print linearly from 1 to N
    print1toN(1,8);

    //print linearly from N to 1
    printNto1(8);

    cout<<"BackTrack 1 to N:"<<endl;
    //print form 1 to N using backtrack 
    print1toN_by_back_track(8);

    cout<<"BackTrack N to 1:"<<endl;
    printNto1_by_back_track(1,8);
    
}
