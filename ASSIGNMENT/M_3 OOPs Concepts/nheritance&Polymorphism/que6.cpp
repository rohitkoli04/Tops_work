#include <iostream>
using namespace std;
class Base {
private:
    int privateData;

protected:
    int protectedData;

public:
    int publicData;

    void displayBase() {
        cout << "Private Data: " << privateData << endl;
        cout << "Protected Data: " << protectedData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};

class Derived : public Base {
public:
    void accessBaseMembers() {
     
        publicData = 50;
        cout << "Public Data in Derived: " << publicData << endl;

        protectedData = 100;
        cout << "Protected Data in Derived: " << protectedData << endl;

        
    }
};

int main() {
    Derived derivedObj;

    derivedObj.accessBaseMembers();
    derivedObj.displayBase();

 
}