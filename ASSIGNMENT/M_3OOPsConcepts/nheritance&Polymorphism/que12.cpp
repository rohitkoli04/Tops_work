#include <iostream>
using namespace std;

class SwapNumbers {
public:
    friend void swap(SwapNumbers& num1, SwapNumbers& num2);

    SwapNumbers(int n) : number(n) {}

    void displayNumber() const {
        cout << "Number: " << number << endl;
    }

private:
    int number;
};

void swap(SwapNumbers& num1, SwapNumbers& num2) {
    num1.number = num1.number + num2.number;
    num2.number = num1.number - num2.number;
    num1.number = num1.number - num2.number;
}

int main() {
    SwapNumbers num1(10);
    SwapNumbers num2(20);

    cout << "Before swapping:" << endl;
    num1.displayNumber();
    num2.displayNumber();

    swap(num1, num2);

    cout << "After swapping:" << endl;
    num1.displayNumber();
    num2.displayNumber();

    return 0;
}