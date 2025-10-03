#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in Array : ";
    for(int i=0 ;i<n; i++){
        cin>>arr[i];
    }
    cout<<"Reverse order : ";
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}