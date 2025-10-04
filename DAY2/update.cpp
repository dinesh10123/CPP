// Write a program in C++ to pass a pointer to a function that updates the value of a
// variable.
#include<iostream>
using namespace std;

void update(int *p){
    *p = *p + 10;
}
int main(){
    int a = 20;
    update(&a);
    cout<<"Updated a : "<<a;
}