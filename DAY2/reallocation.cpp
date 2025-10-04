// Write a program in C++ to dynamically allocate an array of integers using new, fill
// it with values, then allocate a bigger array, copy the old values into it, add more
// elements, and release both old and new arrays properly

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter initial size of array: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter elements i array :\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newSize;
    cout << "Enter new size (greater than " << n << "): ";
    cin >> newSize;
    int *biggerArr = new int[newSize];

    for (int i = 0; i < n; i++) {
        biggerArr[i] = arr[i];
    }
    cout << "Enter " << newSize - n << " new elements:\n";
    for (int i = n; i < newSize; i++) {
        cin >> biggerArr[i];
    }

    cout << "Final array elements:\n";
    for (int i = 0; i < newSize; i++) {
        cout << biggerArr[i] << " ";
    }
    cout << endl;
    delete[] arr;      
    delete[] biggerArr; 
    return 0;
}
