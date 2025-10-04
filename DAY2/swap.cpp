//Write a program in C++ to swap two numbers using pointers
#include<iostream>
using namespace std;
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int p, q;
    cout<<"Enter two numbers : ";
    cin>>p>>q;
    cout<<"Before Swap "<<" p = "<<p<<" q = "<<q<<endl;
    swap(&p, &q);
    cout<<"After Swap "<<" p = "<<p<<" q = "<<q;
}