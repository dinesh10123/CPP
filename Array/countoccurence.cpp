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
    bool visited[n] {
        false
    };
    cout<<"Occurence of each elements "<<endl;
    for(int i=0; i<n; i++){
        if(visited[i] == true)
            continue;
    int count = 1;
    for(int j=i+1; j<n; j++){
        if(arr[i] == arr[j]){
            visited[j] = true;
            count++;
        }
    }
     cout<<arr[i]<<" occure "<<count<<" times"<<endl;
    }
}