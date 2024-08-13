#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string rollNumber;

public:
    void setRollNumber(const string& roll) {
        rollNumber = roll;
    }

    void displayRollNumber() const {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test {
protected:
    int marksSubject1;
    int marksSubject2;

public:
    void setMarks(int sub1, int sub2) {
        marksSubject1 = sub1;
        marksSubject2 = sub2;
    }

    void displayMarks() const {
        cout << "Marks in Subject 1: " << marksSubject1 << endl;
        cout << "Marks in Subject 2: " << marksSubject2 << endl;
    }
};

class Result : public Student, public Test {
public:
    void calculateTotal() const {
        int totalMarks = marksSubject1 + marksSubject2;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result studentResult;

    studentResult.setRollNumber("12345");
    studentResult.setMarks(85, 90);

    studentResult.displayRollNumber();
    studentResult.displayMarks();
    studentResult.calculateTotal();

   