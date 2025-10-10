#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool isSorted = true;;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout<<"Array is sorted";
    }else{
        cout<<"array is not sorted";
    }
}