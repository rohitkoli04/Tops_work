#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

int main() {
    Rectangle rectangle(5.0, 3.0);
    cout << "Area of Rectangle: " << rectangle.area() << endl;

   
