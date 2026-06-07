/*
A queue is a container that follows the FIFO (First In, First Out) principle.
*/
#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue <int> q;
    //adding elements
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    //Accessing Elements
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    //Removing Elements
    q.pop();        //⚠️ pop() does not return the removed value.
    cout<<"After removing Front :"<<q.front()<<endl;

    //Size of queue
    cout<<"Size :"<<q.size()<<endl; //expected :3
    cout<<"Is empty:"<<q.empty();

    //Traversing a queue
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    //for traversing without destroying , make a copy
    
}
