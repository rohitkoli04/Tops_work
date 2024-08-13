#include <iostream>

using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    string getTriangleType() {
        if (side1 == side2 && side2 == side3) {
            return "Equilateral";
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            return "Isosceles";
        } else {
            return "Scalene";
        }
    }
};

int main() {
    Triangle t1(5, 3, 3);
    Triangle t2(3, 6, 5);
    Triangle t3(8, 5, 5);

    cout << "Triangle 1 is: " << t1.getTriangleType() << endl;
    cout << "Triangle 2 is: " << t2.getTriangleType() << endl;
    cout << "Triangle 3 is: " << t3.getTriangleType() << endl;

    return 0;
}