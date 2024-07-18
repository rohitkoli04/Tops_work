//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator{
    public :
    int add(int a,int b){
        return a+b;
    }
    int sub (int a,int b){
        return a-b;
    }
    int mul(int a,int b){
        return a*b;
    }
    int div(int a,int b){
        return a/b;
    }
};
int main(){
    calculator c;
    cout<<c.add(5,2)<<endl;
   
}