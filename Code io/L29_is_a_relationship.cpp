#include <iostream>
using namespace std;

/*
"Is-A" Relationship:
An Is-A relationship represents inheritance in Object-Oriented Programming.

It means:
" that one class is a specialized version of another class."
eg:
A Car is a Vehicle
A Dog is an Animal
A Student is a Person

*/

// Base class
class Animal {
public:

    // Function common to all animals
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Derived class
// Dog inherits all public members of Animal
class Dog : public Animal {
public:

    // Function specific to Dog
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {

    // Creating an object of Dog
    Dog d;

    // Inherited from Animal
    d.eat();

    // Defined in Dog
    d.bark();

    return 0;
}

