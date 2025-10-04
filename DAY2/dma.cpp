#include<iostream>
using namespace std;
int main(){
    int n;
   // int arr[n];
    cout<<"Enter element in array : ";
    cin>>n;
    int *arr = new int[n];
    cout<<"ENter elements in array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int *p = arr;
    cout<<"First Value : "<<*p<<endl;
    cout<<"second Value : "<<*(p+1)<<endl;
    cout<<"third Value : "<<*(p+2)<<endl;
    cout<<"fouth Value : "<<*(p+3)<<endl;
    cout<<"fifth Value : "<<*(p+4)<<endl;

}