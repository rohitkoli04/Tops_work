#include <iostream>
using namespace std;


class rohit {
public:
    rohit() {
        cout << "rohit constructor called" << endl;
    }
};

class you : public rohit {
public:
    you() {
        cout << "you constructor called" << endl;
    }
};


class yourself : public you {
public:
    yourself() {
        cout << "yourself constructor called" << endl;
    }
};

int main() {
    yourself c;
    return 0;
}