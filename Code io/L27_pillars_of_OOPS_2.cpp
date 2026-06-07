#include<iostream>
using namespace std;

// Inheritance = A class (child) acquires properties and 
// methods of another class (parent)
// Syntax: class Child : accessSpecifier Parent

//Rule of thumb: Use private by default. 
//Switch to protected only when you know child classes need direct access to that data.

// ─────────────────────────────────────────
//  BASE CLASS (Parent)
// ─────────────────────────────────────────
class Vehicle{
    public:
        string brand;
        int speed;

        Vehicle(string brand, int speed){
            this->brand = brand;
            this->speed = speed;
            cout << "Vehicle Constructor called" << endl;
        }

        void displayVehicle(){
            cout << "Brand: " << brand << " | Speed: " << speed << "kmph" << endl;
        }

        ~Vehicle(){
            cout << "Vehicle Destructor called" << endl;
        }
};

// ─────────────────────────────────────────
//  SINGLE INHERITANCE — one parent, one child
// ─────────────────────────────────────────
class Car : public Vehicle{         // Car inherits Vehicle
    public:
        int doors;

        Car(string brand, int speed, int doors)
            : Vehicle(brand, speed){ // calling parent constructor
            this->doors = doors;
            cout << "Car Constructor called" << endl;
        }

        void displayCar(){
            displayVehicle();       // using parent method
            cout << "Doors: " << doors << endl;
        }

        ~Car(){
            cout << "Car Destructor called" << endl;
        }
};

// ─────────────────────────────────────────
//  MULTILEVEL INHERITANCE — grandparent → parent → child
// ─────────────────────────────────────────
class ElectricCar : public Car{     // ElectricCar inherits Car which inherits Vehicle
    public:
        int batteryRange;

        ElectricCar(string brand, int speed, int doors, int batteryRange)
            : Car(brand, speed, doors){  // calling Car constructor
            this->batteryRange = batteryRange;
            cout << "ElectricCar Constructor called" << endl;
        }

        void displayElectricCar(){
            displayCar();           // using Car method (which uses Vehicle method)
            cout << "Battery Range: " << batteryRange << "km" << endl;
        }

        ~ElectricCar(){
            cout << "ElectricCar Destructor called" << endl;
        }
};

// ─────────────────────────────────────────
//  MULTIPLE INHERITANCE — two parents, one child
// ─────────────────────────────────────────
class GPS{
    public:
        string mapVersion;

        GPS(string mapVersion){
            this->mapVersion = mapVersion;
            cout << "GPS Constructor called" << endl;
        }

        void displayGPS(){
            cout << "Map Version: " << mapVersion << endl;
        }
};

class SmartCar : public Car, public GPS{   // inherits both Car and GPS
    public:
        SmartCar(string brand, int speed, int doors, string mapVersion)
            : Car(brand, speed, doors), GPS(mapVersion){
            cout << "SmartCar Constructor called" << endl;
        }

        void displaySmartCar(){
            displayCar();
            displayGPS();
        }
};

// ─────────────────────────────────────────
//  MAIN
// ─────────────────────────────────────────
int main(){

    cout << "─── Single Inheritance ───" << endl;
    Car c1("Suzuki", 120, 4);
    c1.displayCar();

    cout << "\n─── Multilevel Inheritance ───" << endl;
    ElectricCar e1("Tesla", 250, 4, 500);
    e1.displayElectricCar();

    cout << "\n─── Multiple Inheritance ───" << endl;
    SmartCar s1("BMW", 200, 4, "v2.5");
    s1.displaySmartCar();

    return 0;
}
//One line difference
// private   = only me
// protected = me + my children
// public    = everyone