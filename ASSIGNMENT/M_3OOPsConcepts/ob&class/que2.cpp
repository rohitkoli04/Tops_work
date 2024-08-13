#include <iostream>
using namespace std;

class Calculator {
private:
    double num1;
    double num2;

public:
    Calculator() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    void add() {
        cout << "Addition: " << num1 + num2 << endl;
    }

    void sub() {
        cout << "Subtraction: " << num1 - num2 << endl;
    }

    void div() {
        if (num2 != 0) {
            cout << "Division: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero" << endl;
        }
    }

    void mult() {
        cout << "Multiplication: " << num1 * num2 << endl;
    }
};

int main() {
    Calculator cal;

    cal.add();
    cal.sub();
    cal.div();
    cal.mult();

    
}