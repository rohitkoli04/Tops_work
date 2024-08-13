#include <iostream>
using namespace std;

class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b == 0) {
            cout << " Division by zero" << endl;
            return 0;
        }
        return a / b;
    }

    double divide(double a, double b) {
        if (b == 0.0) {
            cout << "Error: Division by zero" << endl;
            return 0.0;
        }
        return a / b;
    }
};

int main() {
    MathOperations math;

    int intResult1 = math.add(5, 3);
    double doubleResult1 = math.add(2.5, 1.7);

    int intResult2 = math.subtract(10, 4);
    double doubleResult2 = math.subtract(7.2, 3.5);

    int intResult3 = math.multiply(6, 2);
    double doubleResult3 = math.multiply(4.5, 2.3);

    int intResult4 = math.divide(15, 3);
    double doubleResult4 = math.divide(10.5, 2.1);

    cout << "Addition (int): " << intResult1 << endl;
    cout << "Addition (double): " << doubleResult1 << endl;

    cout << "Subtraction (int): " << intResult2 << endl;
    cout << "Subtraction (double): " << doubleResult2 << endl;

    cout << "Multiplication (int): " << intResult3 << endl;
    cout << "Multiplication (double): " << doubleResult3 << endl;

    cout << "Division (int): " << intResult4 << endl;
    cout << "Division (double): " << doubleResult4 << endl;

    
}