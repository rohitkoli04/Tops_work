/*Write a program to find the multiplication values and the cubic values using
inline function*/
#include<iostream>
using namespace std;
inline int multiplicatuon(int a, int b){
    return a * b;

}
//cubic value
inline int cubic (int a){
    return a*a*a;

}
int main(){
    int num1,num2;
    cout<<"enter two number :";
    cin>>num1>>num2;
    cout<<"multiplication"<<multiplicatuon(num1,num2)<<endl;
    cout<<"cubic value"<<num1<<":"<<cubic(num1)<<endl;
    cout<<"cubic value"<<num2<<":"<<cubic(num2)<<endl;
    return 0;



}