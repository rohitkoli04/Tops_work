#include <iostream>
using namespace std;

class Car {
private:
    string company;
    string model;
    int manufacturing ;

public:
    
    string Company() {
        return company;
    }

    string Model() {
        return model;
    }

    int Year() {
        return manufacturing ;
    }

    // Setters
    void Company(string c) {
        company = c;
    }

    void Model(string m) {
        model = m;
    }

    void setYear(int y) {
        manufacturing  = y;
    }
};

int main() {
    Car myCar;

    myCar.Company("Jaguar");
    myCar.Model("gaguar I-pace");
    myCar.setYear (2024);

    cout << "Company: " << myCar.Company() << endl;
    cout << "Model: " << myCar.Model() << endl;
    cout << "Year: " << myCar.Year() << endl;

    return 0;
}