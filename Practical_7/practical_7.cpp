#include <iostream>

using namespace std;

class Shape {
    public:
        virtual float area() = 0;
        virtual float perimeter() = 0;
};

class Triangle : public Shape {
    private:
        float base;
        float height;

    public:
        Triangle(float b, float h) : base(b), height(h) {}

        float area() {
            return 0.5 * base * height;
        }

        float perimeter() {
            // Assuming it's an equilateral triangle
            return 3 * base;
        }
};

class Square : public Shape {
    private:
        float side;

    public:
        Square(float s) : side(s) {}

        float area() {
            return side * side;
        }

        float perimeter() {
            return 4 * side;
        }
};

int main() {
    Shape* shape;

    Triangle triangle(5, 7);
    Square square(4);

    // Assign Triangle object to Shape pointer
    shape = &triangle;
    cout << "Triangle - Area: " << shape->area() << ", Perimeter: " << shape->perimeter() << endl;

    // Assign Square object to Shape pointer
    shape = &square;
    cout << "Square - Area: " << shape->area() << ", Perimeter: " << shape->perimeter() << endl;

    return 0;
}

//Code by Steavo Babu