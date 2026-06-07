//Inheritance Cont.. 
//Understanding of access specifiers

#include<iostream>
using namespace std;

// ─────────────────────────────────────────
// ACCESS SPECIFIER BEHAVIOR IN INHERITANCE
// ─────────────────────────────────────────

class Vehicle{
    public:
        string brand;       // accessible everywhere

    protected:
        int speed;          // accessible in class + child — NOT outside

    private:
        int secretCode;     // accessible ONLY in this class
};

class Car : public Vehicle{
    public:
        void show(){
            brand = "Suzuki";   // ✅ public — accessible in child
            speed = 120;        // ✅ protected — accessible in child
            // secretCode = 99; // ❌ private — NOT accessible in child
        }
};

class ElectricCar : public Car{
    public:
        void show(){
            brand = "Tesla";    // ✅ public — accessible in grandchild
            speed = 250;        // ✅ protected — accessible in grandchild
            // secretCode = 99; // ❌ private — NOT accessible in grandchild
        }
};

int main(){
    Car c1;
    c1.brand = "Suzuki";    // ✅ public — accessible outside class
    // c1.speed = 120;      // ❌ protected — NOT accessible outside class
    // c1.secretCode = 99;  // ❌ private — NOT accessible outside class
}