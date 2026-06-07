/*
A stack is a container that follows the LIFO (Last In, First Out) principle.
*/
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> S1 ;
    //adding elements
    S1.push(10);
    S1.push(20);
    S1.push(30);
    S1.push(40);

    //accessing top element
    cout<<S1.top()<<endl;

    //removing elements
    //⚠️ pop() does not return the removed value.
    int x = S1.top();
    S1.pop();

    //size of stack
    cout<<S1.size()<<endl;

    //empty-check
    cout<<S1.empty()<<endl;

    //Traversing a Stack

    //Stacks do not provide iterators❌.
    stack <int> S2;

    while(!S2.empty())
    {
        cout << S2.top() << " ";
        S2.pop();                   //⚠️ This empties the stack.
    }
    
    //Traversing Without Destroying
    //Make a copy:
    stack <int>S3;
    S3.push(12);
    S3.push(23);
    S3.push(34);

    stack<int> temp = S3;

    while(!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout<<endl;
    //Useful Example: Reverse a String
    string str = "HELLO";

    stack<char> s;

    for(char ch : str)
    {
        s.push(ch);
    }

    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }


}