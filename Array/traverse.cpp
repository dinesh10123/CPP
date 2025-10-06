#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in Array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array elements are : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
