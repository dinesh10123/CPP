#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in Array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max = 0;
    int min = arr[n]-1;
  
    for(int i=0; i<n; i++){
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    cout<<"Largest : "<<max<<endl;
    cout<<"Smallest : "<<min<<endl;
}