#include<iostream>
#include<climits>
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
    int larg = INT_MIN;   //0;
    int seclarg = INT_MIN;  //0;
    for(int i=0; i<n; i++){
        if(arr[i] > larg){
            seclarg = larg;
            larg = arr[i];
        }
        else if(arr[i] > seclarg && arr[i] != larg ){
            seclarg = arr[i];
        }
    }
    cout<<"Second Largest : "<<seclarg;
}