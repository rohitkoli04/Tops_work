#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Lecture {
private:
string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:

    Lectu(string lecturer, string subject, string course, int numLectures) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numberOfLectures = numLectures;
    }

    void displayDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numberOfLectures << endl;
    }
};

int main() {
  
    vector<Lecture> lectures;

  
    lectures.push_back(Lecture("rohit", "Mathematics", "Calculus", 10));
    lectures.push_back(Lecture("Janjana", "Physics", "Quantum Mechanics", 8));
    lectures.push_back(Lecture("sakshi", "Chemistry", "Organic Chemistry", 12));
    lectures.push_back(Lecture("rahul", "Biology", "Genetics", 6));
    lectures.push_back(Lecture("riya", "Computer Science", "Data Structures", 14));

    // Display lecture details
    for (int i = 0; i < lectures.size(); i++) {
        cout << "Lecture " << i + 1 << ":" << endl;
        lectures[i].displayDetails();
        cout << endl;
    }

    return 0;
}