#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Reverse Array : ";
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}