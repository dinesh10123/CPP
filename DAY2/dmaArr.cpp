// Write a program in C++ to dynamically allocate memory for an array of 5 integers
// using a pointer, take input from the user, and display the array elements.

#include<iostream>
using namespace std;
int main(){
    int *arr = new int[5];
    cout<<"Enter elements in Array : ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"Array elements are : ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
}