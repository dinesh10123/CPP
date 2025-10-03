#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    int sum = a + b;
    cout<<"Addition is "<<sum<<endl;
    int sub = a - b;
    cout<<"Subtraction is "<<sub<<endl;
    int mul = a * b;
    cout<<"Multiplication is "<<mul<<endl;
    double div = a / b;
    cout<<"Division  is "<<div<<endl;
    int mod = a % b;
    cout<<"Modulo is "<<mod<<endl;
}