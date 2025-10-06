#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    int evencount = 0;
    int oddcount = 0;
    cout<<"Enter elements in array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0)
            evencount++;
        if(arr[i] % 2 != 0)
            oddcount++;
    }
    cout<<"Even : "<<evencount<<endl;
    cout<<"Odd : "<<oddcount<<endl;

}