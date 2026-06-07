//Diamond problem 
#include<iostream>
using namespace std;

class A{
    public:
    void show(){
        cout << "Show of A" << endl;
    }
};

class B : virtual public A{     // virtual — share A, don't duplicate
};

class C : virtual public A{     // virtual — share A, don't duplicate
};

class D : public B, public C{   // D gets only ONE copy of A
};

int main(){
    D d;
    d.show();       // ✅ no ambiguity — only one A exists now
}