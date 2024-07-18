#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    
    Circle(double r) {
        radius = r;
    }
    double getRadius() {
        return radius;
    }
    void setRadius(double r) {
        radius = r;
    }


    double calculateArea() {
        return 3.14 * radius * radius;
    }

   
    double calculateCircumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Circle myCircle(10.5);
    cout << "Area: " << myCircle.calculateArea() << endl;
    cout << "Circumference: " << myCircle.calculateCircumference() << endl;

    return 0;
}