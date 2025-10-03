#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element in Array : ";
    for(int i=0; i<n; i++){
         cin>>arr[i];
    }
   
    int large = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }
    cout<<"Larger Number is : "<<large;


}