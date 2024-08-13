#include <iostream>
#include <string>
using namespace std; ;

class Cricketer {
protected:
    string name;
    int age;

public:
    Cricketer(const string& n, int a) : name(n), age(a) {}

    virtual void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    string bestPerformance;

public:
    Batsman(const string& n, int a, int tr, double ar, const string& bp)
        : Cricketer(n, a), totalRuns(tr), averageRuns(ar), bestPerformance(bp) {}

    void displayInfo() const override {
        Cricketer::displayInfo();
        cout << "Total Runs: " << totalRuns << ", Average Runs: " << averageRuns
                  << ", Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman("rohit koli", 25, 5000, 55.5, "Top Score in a Test Match");
    batsman.displayInfo();

  
}