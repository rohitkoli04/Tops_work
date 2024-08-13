#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;

public:
    void setStudentDetails(const string& n, int r) {
        name = n;
        rollNumber = r;
    }

    void displayStudentDetails() const {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

class Marks {
protected:
    int maths;
    int science;
    int english;

public:
    void setMarks(int m, int s, int e) {
        maths = m;
        science = s;
        english = e;
    }

    void displayMarks() const {
        cout << "Maths: " << maths << ", Science: " << science << ", English: " << english << endl;
    }
};

class MarkSheet : public Student, public Marks {
public:
    void calculateTotal() const {
        int total = maths + science + english;
        cout << "Total Marks: " << total << endl;
    }

    void calculateAverage() const {
        double average = (maths + science + english) / 3.0;
        cout << "Average Marks: " << average << endl;
    }
};

int main() {
    MarkSheet studentMarkSheet;

    studentMarkSheet.setStudentDetails("rohit koli", 123);
    studentMarkSheet.setMarks(85, 92, 78);

    studentMarkSheet.displayStudentDetails();
    studentMarkSheet.displayMarks();
    studentMarkSheet.calculateTotal();
    studentMarkSheet.calculateAverage();

    
}