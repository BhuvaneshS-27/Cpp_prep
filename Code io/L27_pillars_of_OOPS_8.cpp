//Abstraction : using pure virtual function (Abstract Class)

#include<iostream>
using namespace std;

// Abstract class — cannot create object of this
class Shape{
    public:
        // Pure virtual — every shape MUST calculate its own area
        virtual void area() = 0;    
};

class Circle : public Shape{
    public:
        float r;
        Circle(float r){
            this->r = r;
        }
        void area() override{
            cout << "Circle Area: " << 3.14 * r * r << endl;
        }
};

class Rectangle : public Shape{
    public:
        float l, b;
        Rectangle(float l, float b){
            this->l = l;
            this->b = b;
        }
        void area() override{
            cout << "Rectangle Area: " << l * b << endl;
        }
};

class Triangle : public Shape{
    public:
        float base, height;
        Triangle(float base, float height){
            this->base = base;
            this->height = height;
        }
        void area() override{
            cout << "Triangle Area: " << 0.5 * base * height << endl;
        }
};

int main(){

    // Shape s;         // ❌ ERROR — abstract class

    Shape *s;           // ✅ pointer allowed

    Circle c(7);
    s = &c;
    s->area();      // same like (*s).area();

    Rectangle r(4, 5);
    s = &r;
    s->area();

    Triangle t(6, 8);
    s = &t;
    s->area();

    return 0;
}

/*
Shape     → abstract  — defines WHAT to do  (calculate area)
Circle    → concrete  — defines HOW to do it (π r²)
Rectangle → concrete  — defines HOW to do it (l × b)

Shape doesn't know how to calculate area —
 but it forces every child to figure it out themselves.

 That internal "how" is hidden inside each class — that's abstraction.
*/