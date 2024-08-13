#include <iostream>
#include <string>
using namespace std ;

// Address class
class Address {
private:
    string street;
    string city;
    string state;
    string zipCode;

public:
    Address(string s, string c, string st, string zc) {
        street = s;
        city = c;
        state = st;
        zipCode = zc;
    }

    void displayAddress() {
        cout << "Street: " << street << endl;
        cout << "City: " << city << endl;
        cout << "State: " << state << endl;
        cout << "Zip Code: " << zipCode << endl;
    }
};

// Student class
class Student {
private:
    string name;
    string className;
    int rollNumber;
    int marks;
    Address* address;

public:
    Student(string n, string c, int r, int m, Address* a) {
        name = n;
        className = c;
        rollNumber = r;
        marks = m;
        address = a;
    }

    char calculateGrade() {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        cout << "Address: " << endl;
        address->displayAddress();
    }
};

int main() {
    
    Address* address1 = new Address("123 Main St", "City", "State", "12345");

    Student* student1 = new Student("rohit koli", "10th", 123, 85, address1);

   
    student1->displayStudentInfo();

    delete address1;
    delete student1;

    return 0;
}