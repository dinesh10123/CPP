#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Marks of student : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    double avg = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    avg = sum / n;
    cout<<"Sum : "<<sum<<endl;
    cout<<"Average: "<<avg<<endl;
}