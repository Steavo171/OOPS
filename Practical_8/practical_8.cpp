#include <iostream>

using namespace std;

class Shape {
    public:
        virtual float area() = 0;
        virtual float perimeter() = 0;
};

class Rectangle : public Shape {
    private:
        float length;
        float width;

    public:
        Rectangle(float l, float w) : length(l), width(w) {}

        float area() {
            return length * width;
        }

        float perimeter() {
            return 2 * (length + width);
        }
};

class Circle : public Shape {
    private:
        float radius;

    public:
        Circle(float r) : radius(r) {}

        float area() {
            return 3.14159 * radius * radius;
        }

        float perimeter() {
            return 2 * 3.14159 * radius;
        }
};

int main() {
    Shape *shape;

    Rectangle *rectangle = new Rectangle(5, 7);
    Circle *circle = new Circle(3);

    // Assign Rectangle object to Shape pointer
    shape = rectangle;
    cout << "Rectangle - Area: " << shape->area() << ", Perimeter: " << shape->perimeter() << endl;

    // Assign Circle object to Shape pointer
    shape = circle;
    cout << "Circle - Area: " << shape->area() << ", Circumference: " << shape->perimeter() << endl;

    delete rectangle;
    delete circle;

    return 0;
}

//Code by Steavo Babu