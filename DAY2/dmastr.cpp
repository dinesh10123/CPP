// Write a program in C++ to dynamically allocate memory for a string using a
// character pointer and new. Take user input for the string, display it, and then free
// the memory
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of String : ";
    cin>>size;

    char *str = new char[size + 1];
    cin.ignore();
    cout<<"Enter String : ";
    cin.getline(str, size+1);
    cout<<"String : "<<str<<endl; 
    delete[] str;
}