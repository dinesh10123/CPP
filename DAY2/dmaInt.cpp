// Write a program in C++ to dynamically allocate memory for a single integer using
// new, assign a value, display it, and then free the memory using delete.

#include<iostream>
using namespace std;
int main(){
    int *p = new int;
    *p = 100;
    cout<<"Value : "<<*p;
    delete p;
    return 0;
}