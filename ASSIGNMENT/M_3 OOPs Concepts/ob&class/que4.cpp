#include <iostream>

using namespace std;

class bAcc {
private:
    int Accnum;
    double balance;

public:
 
    bAcc(int accNum, double initialBalance) {
        Accnum = accNum;
        balance = initialBalance;
    }

   
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposite:" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

  
    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew:" << amount << endl;
            return true;
        } else {
            cout << "Invalid withdrawal amount." << endl;
            return 0;
        }
    }

  
    void display() {
        cout << "Account Number: " << Accnum << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    bAcc acc(000000, 1000);

    acc.display();

    acc.deposit(500);
    acc.display();

    acc.withdraw(200);
    acc.display();

    acc.withdraw(1000);
    acc.display();

    return 0;
}