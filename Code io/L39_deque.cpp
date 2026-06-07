
#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main(){

/*
Deque in C++ (STL)

Deque stands for Double Ended Queue.

It allows insertion and deletion from both the front and the back efficiently.
Its like combination of:
Queue + Stack
Vector + Queue

*/
deque<int> d1;                  // Empty deque

deque<int> d2 = {10,20,30,40};  // Initial values

deque<int> d3(5);               // {0,0,0,0,0}

deque<int> d4(5,100);           // {100,100,100,100,100}

//Adding Elements
d1.push_back(20);
d1.push_back(30);

d1.push_front(10);   //10 20 30

//Accessing Elements
//Using Index
cout << d1[1]<<endl;    //20

//Using at()
cout << d1.at(1)<<endl; //20

//front element
cout<<d1.front()<<endl; //10

//back element
cout<<d1.back()<<endl;  //30

//size
cout<<d1.size()<<endl;  //3

//empty-check
cout<<d1.empty()<<endl; //0

//Traversing
    //METHOD 1: Indexing 
    for(int i=0; i<d1.size(); i++)
    {
        cout << d1[i] << " ";
    }
    //METHOD 2: Iterator
    for(auto it=d1.begin(); it!=d1.end(); it++)
    {
        cout << *it << " ";
    }

    //METHOD 3 :Range-Based Loop
    for(int x:d1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
//Insert at specific position
    deque<int> dq={10,20,30,40,50};
    dq.insert(dq.begin()+2,25);
    for(int x:dq)
    {
        cout<<x<<" ";       //expected : {10,20,25,30,40,50}
    }
    cout<<endl;

//Erase one element
    dq.erase(dq.begin()+2); //expected : {10,20,30,40,50}

//Erase Multiple Elements
    dq.erase(dq.begin()+1,dq.begin()+4);    //removing 20,30,40
    for(int x:dq)
    {
        cout<<x<<" ";       //expected : {10,50}
    }

//Empty entire deque
dq.clear();

//Resize Deque 
dq.resize(5);   //Adds zeros if enlarged.
cout<<endl<<endl;
//sorting 
    deque <int> d5 ={34,23,56,12,45};
    sort(d5.begin(),d5.end());
    for(int x:d5)
    {
        cout<<x<<" ";       //expected : {12,23,34,45,56}
    }
cout<<endl;
//reverse 
reverse(d5.begin(),d5.end());   //expected : {56,45,34,23,12}

//search 
auto it = find(d5.begin(),d5.end(),34);     //returns address
int position = it-d5.begin();

cout<<"Pos:"<<position<<endl;          //expected :2

//Count Occurrences
int counter= count(d5.begin(),d5.end(),45);
cout<<"Count :"<<counter<<endl;   //expected : 1

//Maximum Element
int max=*max_element(d5.begin(),d5.end());  //returns address
int min=*min_element(d5.begin(),d5.end());



/*
Deque-Specific (compared to vector)

push_front()
pop_front()

Everything else is mostly same as vector:
----------------------------------------
push_back()
pop_back()

front()
back()

size()
empty()

insert()
erase()

clear()

resize()

sort()
reverse()
find()
count()

max_element()
min_element()

operator[]
at()
*/

}