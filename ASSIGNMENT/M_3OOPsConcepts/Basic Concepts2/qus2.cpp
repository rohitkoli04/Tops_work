#include <iostream>
using namespace std;

class BankAccount{
    public:
    string name_borr ,acc_type;
    int acc_num , bal, amt, current_balance;
    public:
    int assignValue(){
        cout<<"enter the detais blow"<<endl;
        cout<<"borrower name";
        getline(cin, name_borr);
        cout<<"account type";
        cin>>acc_type;
    }
    int deposit(){
        cout<<"enter the amount of deposit";
        cin>>amt;
        current_balance += amt;
        cout<<"borrower name :"<<name_borr<<endl<<"current balance :"<<current_balance<<endl;
    }
    int checkBalance(){
        current_balance = 10000;
        cout<<endl<<"your current balance  is :"<<current_balance<<endl;
    }
    int withdrawal(){
        cout<<"enter withdrawal amount";
        cin>>amt;
        if(amt <= current_balance){
            current_balance -= amt;
            cout<<endl<<"borrower name :"<<name_borr<<endl<<"current balance :"<<current_balance<<endl;
        } else {
            cout<<endl<<"Insufficient balance!";
        }
    }
};
int main(){
    BankAccount b;
    b.assignValue();
    b.deposit();
    b.checkBalance();
    b.withdrawal();
    return 0;
}