#include <iostream>
using namespace std;

class MaxNumber {
public:
    friend int findMax(MaxNumber num1, MaxNumber num2);

    MaxNumber(int n) : number(n) {}

private:
    int number;
};

int findMax(MaxNumber num1, MaxNumber num2) {
    return (num1.number > num2.number) ? num1.number : num2.number;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    MaxNumber maxNum1(num1);
    MaxNumber maxNum2(num2);

    int maxNumber = findMax(maxNum1, maxNum2);

    cout << "The maximum number is: " << maxNumber << endl;

}