#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    file.open("file.txt", ios::in | ios::out | ios::trunc);
    file<<"Dinesh\nSagar\nAbhay\n";
    file.seekg(0);
    file.seekg(0, ios::end);
int size = file.tellg();
cout << "File size: " << size << " bytes";

    string line;
    while(getline(file, line)){
        cout<<line<<endl;
    }
    file.close();
    return 0;
}