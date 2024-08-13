#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(const string& n, int a) : name(n), age(a) {
        cout << "Person constructor called" << endl;
    }

    void displayPerson() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : virtual public Person {
protected:
    int rollNumber;

public:
    Student(const string& n, int a, int r) : Person(n, a), rollNumber(r) {
        cout << "Student constructor called" << endl;
    }

    void displayStudent() const {
        displayPerson();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Teacher : virtual public Person {
protected:
    string subject;

public:
    Teacher(const string& n, int a, const string& s) : Person(n, a), subject(s) {
        cout << "Teacher constructor called" << endl;
    }

    void displayTeacher() const {
        displayPerson();
        cout << "Subject: " << subject << endl;
    }
};

class Tutor : public Student, public Teacher {
public:
    Tutor(const string& n, int a, int r, const string& s)
        : Person(n, a), Student(n, a, r), Teacher(n, a, s) {
        cout << "Tutor constructor called" << endl;
    }

    void displayTutor() const {
        displayPerson();
        displayStudent();
        displayTeacher();
    }
};

int main() {
    Tutor tutor("rohit koli", 25, 123, "Mathematics");

    tutor.displayTutor();

 
}