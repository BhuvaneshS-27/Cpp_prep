//run-time Polymorphism : function overriding 

#include<iostream>
using namespace std;

class remote{
    public:
    virtual void show(){            //remove virtual for case I
        cout<<"Remote "<<endl;      //for pure virtual function :
                                    //virtual void show()=0; //then , remote - abstract class
    }
};
class TV: public remote{
    public:
    void show(){
        cout<<"TV Remote "<<endl;
    }
};
class AC: public remote{
    public:
    void show(){
        cout<<"AC Remote "<<endl;
    }
};

int main(){

    remote *r;      //base class pointer

    AC ac;          //derived class object
    TV tv;      

    ac.show();
    tv.show();

    r=&ac;
    (*r).show();    //gives base class output.(without "virtual" keyword) 
    //to avoid that ,use "virtual" keyword to base class

    r=&tv;
    (*r).show();

    /*
The keyword virtual tells the compiler:

"The actual function call should be decided at runtime based on the object being pointed to."
    */
//S2 :Pure Virtual Function
    // I)Pure Virtual Function = a virtual function with no body in base class, 
         //forcing every child class to mandatorily override it.
    // II)A class with pure virtual function becomes an Abstract Class — you cannot create objects of it.
}