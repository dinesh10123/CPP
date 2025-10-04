// Write a program in C++ to create a 2D array (matrix) dynamically using new.
// Take input for rows and columns from the user, fill the matrix, display it, and free
// memory using delete[].

#include<iostream>
using namespace std;
int main(){
    int row=3, col=2;
    int **arr = new int*[row];
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    cout<<"Enter Elements in Array : ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Array elements are : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    delete[] arr;
}