#include <iostream>
using namespace std;


inline void calculateValues(int num, int& multiplies, int& cubic) {
    multiplies = num * num;
    cubic = num * num * num;
}

int main() {
    int num = 5;
    int multiplies, cubic;

    
    calculateValues(num, multiplies, cubic);


    cout << "Multiplication value: " << multiplies <<endl;
    cout << "Cubic value: " << cubic <<endl;

    return 0;
}