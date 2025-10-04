// Write a program in C++ to create an array of 5 integers. Use a pointer to traverse
// the array and print all elements using pointer arithmetic.
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter elements in array : ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int *p = arr;
    cout<<"Elements in array using pointer arithmatic : ";
    for(int i=0; i<5; i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    cout<<"First Value : "<<*p<<endl;
    cout<<"second Value : "<<*(p+1)<<endl;
    cout<<"third Value : "<<*(p+2)<<endl;
    cout<<"fouth Value : "<<*(p+3)<<endl;
    cout<<"fifth Value : "<<*(p+4)<<endl;

}