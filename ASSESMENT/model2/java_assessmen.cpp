#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Lecture {
 public:
  Lecture(string lecturer, string subject, string course, int num_lecturers)
      : lecturer_(lecturer),
        subject_(subject),
        course_(course),
        num_lecturers_(num_lecturers) {}


  void SetValues(string lecturer, string subject, string course,
                 int num_lecturers) {
    lecturer_ = lecturer;
    subject_ = subject;
    course_ = course;
    num_lecturers_ = num_lecturers;
  }

  void AddLecture() {
    string lecturer, subject, course;
    int num_lecturers;
    cout << "Enter lecturer name: ";
    cin >> lecturer;
    cout << "Enter subject name: ";
    cin >> subject;
    cout << "Enter course name: ";
    cin >> course;
    cout << "Enter number of lectures: ";
    cin >> num_lecturers;
    SetValues(lecturer, subject, course, num_lecturers);
  }

  void DisplayDetails() {
    cout << "Lecturer: " << lecturer_ << endl;
    cout << "Subject: " << subject_ << endl;
    cout << "Course: " << course_ << endl;
    cout << "Number of lectures: " << num_lecturers_ << endl;
  }

 private:
  string lecturer_;
  string subject_;
  string course_;
  int num_lecturers_;
};

int main() {
  vector<Lecture> lectures;
  
  for (int i = 0; i < 5; i++) {
    Lecture lecture("", "", "", 0);
    lecture.AddLecture();
    lectures.push_back(lecture);
  }


  for (auto& lecture : lectures) {
    cout << "Lecture Details: " << endl;
    lecture.DisplayDetails();
    cout << endl;
  }

 
}