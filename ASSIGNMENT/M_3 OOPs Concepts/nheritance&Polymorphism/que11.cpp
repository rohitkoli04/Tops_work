#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

class Shape {
public:
    virtual double calculateArea() const = 0;
};

class Rectangle : public Shape {
private:
    double breadth;
    double length;

public:
    Rectangle(double b, double l) : breadth(b), length(l) {}

    double calculateArea() const override {
        return breadth * length;
    }
};

class Triangle : public Shape {
private:
    double breadth;
    double height;

public:
    Triangle(double b, double h) : breadth(b), height(h) {}

    double calculateArea() const override {
        return 0.5 * breadth * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return PI * pow(radius, 2);
    }
};

int main() {
    Rectangle rectangle(5, 3);
    Triangle triangle(4, 6);
    Circle circle(2.5);

    cout << "Rectangle area: " << rectangle.calculateArea() << endl;
    cout << "Triangle area: " << triangle.calculateArea() << endl;
    cout << "Circle area: " << circle.calculateArea() << endl;

}