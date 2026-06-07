#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    double engine;
    Car(){      //1.Default Constructor - A constructor with no parameters.
        brand = "unknown";
        engine = 0.0;
        cout<<"Default Constructor called"<<endl;
    }

    Car(string b, double e){    //2.Parameterized constructor 
        brand = b ;
        engine = e;
        cout<<"Parameterized Constructor called"<<endl;
    }
    Car(const Car &obj){        //3.Copy constructor ( written manually)
        brand=obj.brand;
        engine=obj.engine;
        cout<<"Copy Constructor called"<<endl;
    }
    //const — source object shouldn't be modified 
    //& — pass by reference, not by value (passing by value would call the copy constructor again → infinite recursion)

    //Destructor
    //Main use case — when your class has pointer/dynamic memory, destructor is where you delete it to prevent memory leaks:
    
    ~Car()
    {
        cout<<"destructor called for brand :"<<brand<<endl;
    }

    //functions:
    void display(){
        cout<<"Car Brand :"<<brand<<" |Engine :"<<engine<<endl;
    }

    
};





int main(){

    Car c1;//Default constructor: we shall seperately assign parameters values later
    c1.display();

    Car c2("Suzuki",1.2);   //parameterized constructor 
    c2.display();

    Car c3 = c2;//copy constructor: Compiler's implicit copy constructor kicks in if not declared in class 
    c3.brand="toyota"; //just for change
    c3.engine=3.4;
    c3.display();

    // If copy constructor not declared it does a shallow copy which is fine 
    //for simple types like string and double

    //But if your class had a pointer member (like int* data), 
    //shallow copy would make both objects point to the same memory — a classic bug.

    // That's the real reason you write copy constructors manually.
}

/*
Constructors 
    -spl function called when object is created
    -name is same as class
    -no return type 

    types of constructor 
        |=> Default constructor 
        |=>parameterized constructor 
        |=> copy constructor 

Destructors
    -spl function called when object is destroyed(or out of scope)        
    - ~

*/