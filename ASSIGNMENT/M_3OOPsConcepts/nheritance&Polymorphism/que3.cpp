#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void initialize(const string& n, int a) {
        name = n;
        age = a;
    }

    void read() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void write() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
};

class Student : virtual public Person {
protected:
    double percentage;

public:
    void initialize(double p) {
        percentage = p;
    }

    void read() const {
        Person::read();
        cout << "Percentage: " << percentage << endl;
    }

    void write() {
        Person::write();
        cout << "Enter Percentage: ";
        cin >> percentage;
    }
};

class Teacher : virtual public Person {
protected:
    double salary;

public:
    void initialize(double s) {
        salary = s;
    }

    void read() const {
        Person::read();
        cout << "Salary: " << salary << endl;
    }

    void write() {
        Person::write();
        cout << "Enter Salary: ";
        cin >> salary;
    }
};

class StudentTeacher : public Student, public Teacher {
public:
    void read() const {
        Person::read();
        cout << "Percentage: " << percentage << ", Salary: " << salary << endl;
    }

    void write() {
        Person::write();
        cout << "Enter Percentage: ";
        cin >> percentage;
        cout << "Enter Salary: ";
        cin >> salary;
    }
};

int main() {
    StudentTeacher st;

    st.write();
    st.read();

}