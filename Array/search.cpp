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
    int search;
    cout<<"Enter element to search ";
    cin>>search;
    for(int i=0; i<n; i++){
        if(arr[i] == search){
            cout<<"Element "<<search<<" found at index "<<i;
        }
        else{
            cout<<"Element is not found";
        }
    }
    
}