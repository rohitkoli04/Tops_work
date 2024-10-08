/*Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

   
    double calculateArea() {
        return length * width;
    }

   
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect(5, 3);
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;
    return 0;
}