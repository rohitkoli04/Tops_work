#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    MyString(const string& s) : str(s) {}

    MyString operator+(const MyString& other) const {
        return MyString(str + other.str);
    }

    friend ostream& operator<<(ostream& os, const MyString& myStr) {
        os << myStr.str;
        return os;
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("World!");

    MyString concatenated = str1 + str2;

    cout << "Concatenated string: " << concatenated << endl;

   
}