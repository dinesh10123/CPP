// Write a program in C++ to count the length of a string using a character pointer
// (without using built-in functions like strlen).

#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter String : ";
    cin.getline(str, 100);
    char *ptr = str;
    int count = 0;
    while(*ptr != '\0'){
        count++;
        ptr++;
    }
    cout<<"Length : "<<count;
}