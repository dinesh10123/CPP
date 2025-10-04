// Write a program in C++ with a function that returns a pointer to a dynamically
// allocated array. In main(), call the function, display the array, and free the
// memory.

#include <iostream>
using namespace std;
int *createArray(int size) {
    int *arr = new int[size];   
    cout << "Enter array elements : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    return arr;  
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *myArray = createArray(n);
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
    delete[] myArray;

    return 0;
}
