#include <iostream>
#include <string>
using namespace std;

class employ {
private:
    string name;
    int id;
    double salary;

public:
    employ(string n, int i) : name(n), id(i), salary(1200) {}

    double getsalary() const {
        return salary;
    }

    void setsalary(double perform) {
        if (perform > 0) {
            salary *= perform;
        } else {
            cout << "Invalid  score" << endl;
        }
    }
};

int main() {
    string employname;
    int employeeid;
    cout << "Enter employee name: ";
    getline(cin, employname);
    cout << "Enter employee id: ";
    cin >> employeeid;
    employ eml(employname, employeeid);
    cout << endl << "Enter increasingly salary: ";
    double performance;
    cin >> performance;
    eml.setsalary(performance);
    cout << "New salary: " << eml.getsalary() << endl;

    return 0;
}