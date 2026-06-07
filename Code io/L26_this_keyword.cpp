
#include<iostream>
using namespace std;
//this → pointer to current object | *this → the object itself

class Car{
    public:
    string brand ;
    double engine;

    //Use case 1 :parameter name same as member variable
    Car (string brand , double engine)
    {
        this->brand=brand;  //this->brand = member variable 
        this->engine=engine;//brand alone = parameter
    }
    //FUNCTIONS:
    //use case 2 : return current object (Method Chaining)
    Car& setbrand(string brand){
        this->brand=brand;
        return *this;
    }

    Car& setengine(double engine)
    {
        this->engine=engine;
        return *this;
    }

    //use case 3 : print address of current object 
    void printaddress(){
        cout<<"the address of this object :"<<this<<endl;
    }
    void display(){
        cout<<"Brand name :"<<brand<<"Engine :"<<engine<<endl;
    }


};


int main(){

    // Use case 1 — constructor with same parameter names
    Car c1("suzuki ",1.2);
    c1.display();

    // Use case 2 — Method chaining
    Car c2("unknown",0.0);
    c2.setbrand("Toyota ").setengine(1.8).display(); //chained calls

    //use case 3 - Object address
    c1.printaddress();
    cout<<"Address of C1 from main :"<<&c1<<endl;
    
}