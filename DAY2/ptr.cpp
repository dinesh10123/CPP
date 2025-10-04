// Write a program in C++ to declare an integer variable, store its address in a
// pointer, and display both the value of the variable and its address using the
// pointer.
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *p = &a;
    cout<<"Value of a : "<<a<<endl;
    cout<<"Address of a : "<<&a<<endl;
    cout<<"Address of p : "<<p<<endl;
    cout<<"Value of p : "<<*p<<endl;
}